using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVSnowboard2DWobbleLeftAndRight : MonoBehaviour
{
    [SerializeField] float rotateSpeed = 50f;
    [SerializeField] float maxRotationAngle = 20f;
    float currentAngle = 0f;
    bool rotatingRight = true;
    public bool canWobble = true;
    
    
    void Update()
    {
        if ( canWobble )
        {
            Rotate();
        }
    }


    void Rotate()
    {
        // Calculate rotation amount for this frame
        float rotationAmount = rotateSpeed * Time.deltaTime;

        if ( rotatingRight )
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
        transform.rotation = Quaternion.Euler( 0, 0, currentAngle );
    }


    void CheckMaxAngle()
    {
        if ( currentAngle >= maxRotationAngle )
        {
            currentAngle = maxRotationAngle;
            rotatingRight = false;
        }
    }


    void CheckMinAngle()
    {
        if ( currentAngle <= -maxRotationAngle )
        {
            currentAngle = -maxRotationAngle;
            rotatingRight = true;
        }
    }
}
