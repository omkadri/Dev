using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Driver2DPlayerController : MonoBehaviour
{
    [SerializeField] float steerSpeed = 900f;
    [SerializeField] float moveSpeed = 12f;
    [SerializeField] bool enableBoost = true;
    float defaultSpeed;

    [SerializeField] float boostSpeed = 20f;


    void Start()
    {
        defaultSpeed = moveSpeed;
    }


    void Update()
    {
        float steerAmount = Input.GetAxis( "Horizontal" );
        float moveAmount = Input.GetAxis( "Vertical" );
        transform.Rotate( 0, 0, ( -steerAmount * steerSpeed ) * Time.deltaTime );
        transform.Translate( 0, ( moveAmount * moveSpeed ) * Time.deltaTime, 0 );
    }
    

    void OnCollisionEnter2D( Collision2D other )
    {
        if ( other.gameObject.tag != "Boost" )
        {
            moveSpeed = defaultSpeed;
        }
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( enableBoost && other.tag == "Boost" )
        {
            moveSpeed = boostSpeed;
        }
    }
}