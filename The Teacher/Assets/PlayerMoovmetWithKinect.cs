using System.Collections;
using UnityEngine;
using Kinect = Windows.Kinect;
using System.Collections.Generic;


namespace Assets
{
    public class PlayerMoovmetWithKinect : MonoBehaviour
    {
        public GameObject BodySourceManager;
        public float moveSpeed = 5f;
        public Rigidbody2D rb;
        public Animator animator;
        Vector2 movement;
        int i = 0;

        private BodySourceManager _BodyManager;
        private enum directions {SOUTH, WEST, NORTH, EAST, NORTEAST, NORTWEST, SOUTHEAST, SOUTHWEST, STAY}
        
        void Update()
        {
            
            if (BodySourceManager == null) return;
            _BodyManager = BodySourceManager.GetComponent<BodySourceManager>();
            if (_BodyManager == null) return;
            Kinect.Body[] data = _BodyManager.GetData();
            if (data == null) return;
            Kinect.Body body = data[i];
            if (body.Joints[Kinect.JointType.HandRight].Position.Z == 0) body = data[i++];
            if (i > 5) i = 0;
            
            //Debug.unityLogger.Log(body.Joints[Kinect.JointType.HandRight].Position.Z);
            if (body == null) return;

            switch (GetDirection(body)) {
                case directions.STAY:
                    Moove(0, 0);
                    break;
                case directions.EAST:
                    Moove(0.75f, 0);
                    break;
                case directions.WEST:
                    Moove(-0.75f, 0);
                    break;
                case directions.NORTH:
                    Moove(0, -0.75f);
                    break;
                case directions.SOUTH:
                    Moove(0, 0.75f);
                    break;
                case directions.NORTEAST:
                    Moove(0.75f, -0.75f);
                    break;
                case directions.SOUTHEAST:
                    Moove(0.75f, 0.75f);
                    break;
                case directions.NORTWEST:
                    Moove(-0.75f, -0.75f);
                    break;
                case directions.SOUTHWEST:
                    Moove(-0.75f, 0.75f);
                    break;
            }
        }
        void FixedUpdate()
        {
            rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
        }

        private void Moove(float x, float y) {
            movement.x = x;
            movement.y = y;
            animator.SetFloat("Vertical", movement.y);
            animator.SetFloat("Horizontal", movement.x);
            animator.SetFloat("Speed", movement.sqrMagnitude);
        }
        private directions GetDirection(Kinect.Body body){
            float RightHandYCoord = body.Joints[Kinect.JointType.HandRight].Position.Y;
            float RightShoulderYCoord = body.Joints[Kinect.JointType.ShoulderRight].Position.Y;
            float LeftHandYCoord = body.Joints[Kinect.JointType.HandLeft].Position.Y;
            float LeftShoulderYCoord = body.Joints[Kinect.JointType.ShoulderLeft].Position.Y;
            float RightAnkleZCoord = body.Joints[Kinect.JointType.AnkleRight].Position.Z;
            float MidSpineZCoord = body.Joints[Kinect.JointType.SpineMid].Position.Z;

            if (RightHandYCoord > RightShoulderYCoord && LeftHandYCoord > LeftShoulderYCoord)
                return directions.STAY;
            if (RightHandYCoord > RightShoulderYCoord - 0.25 && RightAnkleZCoord > MidSpineZCoord + 0.20)
                return directions.NORTEAST;
            if (RightHandYCoord > RightShoulderYCoord - 0.25 && RightAnkleZCoord < MidSpineZCoord - 0.20)
                return directions.SOUTHEAST;
            if (LeftHandYCoord > RightShoulderYCoord - 0.25 && RightAnkleZCoord > MidSpineZCoord + 0.20)
                return directions.NORTWEST;
            if (LeftHandYCoord > RightShoulderYCoord - 0.25 && RightAnkleZCoord < MidSpineZCoord - 0.20)
                return directions.SOUTHWEST;
            if (RightHandYCoord > RightShoulderYCoord - 0.25 && RightHandYCoord > 0)
                return directions.EAST;
            if (LeftHandYCoord > LeftShoulderYCoord - 0.25 && LeftHandYCoord > 0)
                return directions.WEST;
            if (RightAnkleZCoord > MidSpineZCoord + 0.20)
                return directions.NORTH;
            if (RightAnkleZCoord < MidSpineZCoord - 0.20)
                return directions.SOUTH;
            return directions.STAY;
        }
    }
}