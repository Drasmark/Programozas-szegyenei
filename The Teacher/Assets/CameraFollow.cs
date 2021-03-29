using System.Collections;
using UnityEngine;

namespace Assets.Scripts
{
    public class CameraFollow : MonoBehaviour
    {
        public Transform Player;

        void FixedUpdate() {
            transform.position = new Vector3(Player.position.x, Player.position.y, transform.position.z);
        }
      
    }
}