using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateLeftRight : MonoBehaviour
{
    [SerializeField] float rotateSpeed = 50f; // Speed of rotation
    [SerializeField] float maxRotationAngle = 20f; // Maximum rotation angle

    float currentAngle = 0f; // Current angle of rotation
    bool rotatingRight = true; // Direction of rotation

    void Update()
    {
        // Calculate rotation amount for this frame
        float rotationAmount = rotateSpeed * Time.deltaTime;

        if (rotatingRight)
        {
            currentAngle += rotationAmount;

            // Check if we've reached the maximum rotation angle
            if (currentAngle >= maxRotationAngle)
            {
                currentAngle = maxRotationAngle; // Clamp to max angle
                rotatingRight = false; // Change direction
            }
        }
        else
        {
            currentAngle -= rotationAmount;

            // Check if we've reached the minimum rotation angle
            if (currentAngle <= -maxRotationAngle)
            {
                currentAngle = -maxRotationAngle; // Clamp to min angle
                rotatingRight = true; // Change direction
            }
        }

        // Apply the rotation
        transform.rotation = Quaternion.Euler(0, 0, currentAngle);
    }
}