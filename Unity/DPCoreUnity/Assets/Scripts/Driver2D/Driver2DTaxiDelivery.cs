using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Driver2DTaxiDelivery : MonoBehaviour
{
    [SerializeField] float _destroyDelay = 0.5f;
    [SerializeField] GameObject _driverImage;
    [SerializeField] GameObject _passengerImage;
    [SerializeField] GameObject _dropOffImage;

    bool _hasCustomer;


    void OnCollisionEnter2D( Collision2D other )
    {
        Debug.Log( "Ouch!" );
    }


     void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "DropOff" && _hasCustomer )
        {
            Debug.Log( "Customer Dropped Off" );
            _hasCustomer = false;
            
            SpriteRenderer passengerRenderer = _passengerImage.GetComponent<SpriteRenderer>();
            SpriteRenderer dropOffCustomerRenderer = _dropOffImage.GetComponent<SpriteRenderer>();
            dropOffCustomerRenderer.sprite = passengerRenderer.sprite;
            dropOffCustomerRenderer.enabled = true;
            passengerRenderer.enabled = false;
        }
        if ( other.tag == "Customer" && !_hasCustomer )
        {
            Debug.Log( "Customer Picked Up" );

            _hasCustomer = true;
            Destroy( other.gameObject, _destroyDelay );

            SpriteRenderer dropOffCustomerRenderer = _dropOffImage.GetComponent<SpriteRenderer>();
            dropOffCustomerRenderer.enabled = false;
            SpriteRenderer customerRenderer = other.GetComponent<SpriteRenderer>();
            SpriteRenderer passengerRenderer = _passengerImage.GetComponent<SpriteRenderer>();
            passengerRenderer.sprite = customerRenderer.sprite;
            passengerRenderer.enabled = true;
        }
    }
}