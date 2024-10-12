using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTaxi2D : MonoBehaviour
{
    public enum FollowMode
    {
        None,
        Driver2D
    }

    [SerializeField] private FollowMode followMode = FollowMode.None; // Dropdown selection
    [SerializeField] private GameObject followTarget;
    
    // Adjustable values
    [SerializeField] private float followSpeed = 2f; // Speed of camera following
    private const int ZBuffer = -10;

    void LateUpdate()
    {
        // Only run the following code if the followMode is set to Driver2D
        if (followMode == FollowMode.Driver2D && followTarget != null)
        {
            // Calculate the target position based on the follow target
            Vector3 followTargetPosition = followTarget.transform.position + new Vector3(0, 0, ZBuffer);
            
            // Set the target position directly to the follow target position
            Vector3 targetPosition = followTargetPosition;

            // Smoothly interpolate the camera's position towards the target position
            transform.position = Vector3.Lerp(transform.position, targetPosition, followSpeed * Time.deltaTime);
        }
    }
}
