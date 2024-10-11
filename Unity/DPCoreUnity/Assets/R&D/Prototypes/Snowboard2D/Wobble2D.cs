using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wobble2D : MonoBehaviour
{
    [SerializeField] float rotateSpeed = 50f; // Speed of rotation
    [SerializeField] float maxRotationAngle = 20f; // Maximum rotation angle
    float currentAngle = 0f; // Current angle of rotation
    bool rotatingRight = true; // Direction of rotation
    public bool canWobble = true;
    void Update()
    {
        if (canWobble)
        {
            Rotate();
        }
    }

    void Rotate()
    {
        // Calculate rotation amount for this frame
        float rotationAmount = rotateSpeed * Time.deltaTime;

        if (rotatingRight)
        {
            currentAngle += rotationAmount;
            CheckMaxAngle();
        }
        else
        {
            currentAngle -= rotationAmount;
            CheckMinAngle();
        }

        // Apply the rotation
        transform.rotation = Quaternion.Euler(0, 0, currentAngle);
    }

    void CheckMaxAngle()
    {
        if (currentAngle >= maxRotationAngle)
        {
            currentAngle = maxRotationAngle; // Clamp to max angle
            rotatingRight = false; // Change direction
        }
    }

    void CheckMinAngle()
    {
        if (currentAngle <= -maxRotationAngle)
        {
            currentAngle = -maxRotationAngle; // Clamp to min angle
            rotatingRight = true; // Change direction
        }
    }
}
