using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Driver2DTaxiDelivery : MonoBehaviour
{
    [SerializeField] float destroyDelay = 0.5f;
    [SerializeField] GameObject driverImage;
    [SerializeField] GameObject passengerImage;
    [SerializeField] GameObject dropOffImage;

    bool hasCustomer;


    void OnCollisionEnter2D( Collision2D other )
    {
        Debug.Log( "Ouch!" );
    }


     void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "DropOff" && hasCustomer )
        {
            Debug.Log( "Customer Dropped Off" );
            hasCustomer = false;
            
            SpriteRenderer passengerRenderer = passengerImage.GetComponent<SpriteRenderer>();
            SpriteRenderer dropOffCustomerRenderer = dropOffImage.GetComponent<SpriteRenderer>();
            dropOffCustomerRenderer.sprite = passengerRenderer.sprite;
            dropOffCustomerRenderer.enabled = true;
            passengerRenderer.enabled = false;
        }
        if ( other.tag == "Customer" && !hasCustomer )
        {
            Debug.Log( "Customer Picked Up" );

            hasCustomer = true;
            Destroy( other.gameObject, destroyDelay );

            SpriteRenderer dropOffCustomerRenderer = dropOffImage.GetComponent<SpriteRenderer>();
            dropOffCustomerRenderer.enabled = false;
            SpriteRenderer customerRenderer = other.GetComponent<SpriteRenderer>();
            SpriteRenderer passengerRenderer = passengerImage.GetComponent<SpriteRenderer>();
            passengerRenderer.sprite = customerRenderer.sprite;
            passengerRenderer.enabled = true;
        }
    }
}