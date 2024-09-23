using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeliveryDriverPlayerController2D : MonoBehaviour
{
    [SerializeField] float steerSpeed = 1f;
    [SerializeField] float moveSpeed = 0.01f;

    void Start()
    {

    }

    void Update()
    {
        float steerAmount = Input.GetAxis("Horizontal");
        float moveAmount = Input.GetAxis("Vertical");
        transform.Rotate(0, 0, ( -steerAmount * steerSpeed ) * Time.deltaTime );
        transform.Translate( 0, ( moveAmount * moveSpeed ) * Time.deltaTime, 0 );
    }
}
