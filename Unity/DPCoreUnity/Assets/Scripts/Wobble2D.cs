using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wobble2D : MonoBehaviour
{
    [SerializeField] float rotateSpeed = 50f;//TODO: add underscore to member variable
    [SerializeField] float maxRotationAngle = 20f;//TODO: add underscore to member variable
    float _currentAngle = 0f;
    bool _rotatingRight = true;
    public bool canWobble = true;//TODO: Create public getter or serialized field
    void Update()
    {
        if (canWobble)
        {
            Rotate();
        }
    }

    void Rotate()
    {
        float rotationAmount = rotateSpeed * Time.deltaTime;

        if ( _rotatingRight )
        {
            _currentAngle += rotationAmount;
            CheckMaxAngle();
        }
        else
        {
            _currentAngle -= rotationAmount;
            CheckMinAngle();
        }

        transform.rotation = Quaternion.Euler( 0, 0, _currentAngle );
    }

    void CheckMaxAngle()
    {
        if ( _currentAngle >= maxRotationAngle )
        {
            _currentAngle = maxRotationAngle;
            _rotatingRight = false;
        }
    }

    void CheckMinAngle()
    {
        if ( _currentAngle <= -maxRotationAngle )
        {
            _currentAngle = -maxRotationAngle;
            _rotatingRight = true;
        }
    }
}