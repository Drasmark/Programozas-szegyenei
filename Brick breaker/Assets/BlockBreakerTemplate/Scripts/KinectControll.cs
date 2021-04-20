using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Kinect = Windows.Kinect;

public class KinectControll : MonoBehaviour
{
    public float minX;              //The minimum x position that the paddle can move to
    public float maxX;
    public GameObject BodySourceManager;
    public float moveSpeed = 450f;
    public Rigidbody2D rb;
    //public Animator animator;
    Vector2 movement;
    int i = 0;

    private BodySourceManager _BodyManager;
    // Start is called before the first frame update
    void Start()
    {
        movement.y = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(BodySourceManager == null) return;
        _BodyManager = BodySourceManager.GetComponent<BodySourceManager>();
        if (_BodyManager == null) return;
        Kinect.Body[] data = _BodyManager.GetData();
        if (data == null) return;
        Kinect.Body body = data[i];
        if (body.Joints[Kinect.JointType.HandRight].Position.Z == 0) body = data[i++];
        if (i > 5) i = 0;

        float _rightHandY = body.Joints[Kinect.JointType.HandRight].Position.Y;
        float _rightShoulderY = body.Joints[Kinect.JointType.ShoulderRight].Position.Y;
        float _leftHandY = body.Joints[Kinect.JointType.HandLeft].Position.Y;
        float _leftShoulderY = body.Joints[Kinect.JointType.ShoulderLeft].Position.Y;
        float _rightHandZ = body.Joints[Kinect.JointType.HandRight].Position.Z;

        if (_rightHandY > _rightShoulderY - 0.25 && _leftHandY > _leftShoulderY - 0.25)
            Move(0);
        else if (_rightHandY > _rightShoulderY - 0.25 && _rightHandZ != 0)
            Move(1);
        else if (_leftHandY > _leftShoulderY - 0.25 && _rightHandZ != 0)
            Move(-1);
        else Move(0);

    }
    private void Move(float x)
    {
        movement.x = x;
        if(rb.position.x  + movement.x >= minX && rb.position.x + movement.x <= maxX)
            rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
    }
}
