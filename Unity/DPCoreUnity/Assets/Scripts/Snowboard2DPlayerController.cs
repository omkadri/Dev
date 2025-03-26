using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snowboard2DPlayerController : MonoBehaviour
{
    [SerializeField] float _torqueAmount = 1f;
    [SerializeField] float _baseSpeed = 20f;
    [SerializeField] float _boostSpeed = 35f;
    public bool canMove = true;//TODO: Create public getter
    Rigidbody2D _rb2d;
    SurfaceEffector2D _surfaceEffector2D;


    void Start()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _surfaceEffector2D = FindFirstObjectByType<SurfaceEffector2D>(); //works when only one of the object type is in the scene
        _surfaceEffector2D.speed = _baseSpeed; 
    }


    void Update()
    {
        if ( canMove )
        {
            RotatePlayer();
            RespondToBoost();
        }
    }


    public void DisableControls()
    {
        //Create OnSnowboardCrash callback
        canMove = false;
    }


    void RespondToBoost()
    {
        if ( Input.GetKey( KeyCode.UpArrow ) )
        {
            _surfaceEffector2D.speed = _boostSpeed;
        }
        else
        {
            _surfaceEffector2D.speed = _baseSpeed;
        }
    }


    void RotatePlayer()
    {
        //player will always torque forward a bit to create the challenge of balance
        _rb2d.AddTorque( -_torqueAmount );

        if ( Input.GetKey( KeyCode.LeftArrow ) )
        {
            _rb2d.AddTorque( _torqueAmount * 4 );
        }
        else if ( Input.GetKey( KeyCode.RightArrow ) )
        {
            _rb2d.AddTorque( -_torqueAmount * 2 );
        }
    }
}