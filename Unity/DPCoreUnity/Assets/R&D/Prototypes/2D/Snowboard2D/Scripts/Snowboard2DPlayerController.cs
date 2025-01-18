using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snowboard2DPlayerController : MonoBehaviour
{
    [SerializeField] float torqueAmount = 0.5f;
    [SerializeField] float baseSpeed = 20f;
    [SerializeField] float boostSpeed = 40f;
    public bool canMove = true;
    Rigidbody2D rb2d;
    SurfaceEffector2D surfaceEffector2D;


    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        surfaceEffector2D = FindFirstObjectByType<SurfaceEffector2D>(); //works when only one of the object type is in the scene
        surfaceEffector2D.speed = baseSpeed; 
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
            surfaceEffector2D.speed = boostSpeed;
        }
        else
        {
            surfaceEffector2D.speed = baseSpeed;
        }
    }


    void RotatePlayer()
    {
        //player will always torque forward a bit to create the challenge of balance
        rb2d.AddTorque( -torqueAmount );

        if ( Input.GetKey( KeyCode.LeftArrow ) )
        {
            rb2d.AddTorque( torqueAmount * 4 );
        }
        else if ( Input.GetKey( KeyCode.RightArrow ) )
        {
            rb2d.AddTorque( -torqueAmount * 2 );
        }
    }
}