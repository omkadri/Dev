using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Delivery2D : MonoBehaviour
{
    [SerializeField] float destroyDelay = 0.5f;
    [SerializeField] GameObject driverImage;
    [SerializeField] GameObject passengerImage;

    bool hasCustomer;
    void OnCollisionEnter2D(Collision2D other)
    {
        Debug.Log("Ouch"!);
    }
     void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "DropOff" && hasCustomer)
        {
            Debug.Log("Customer Dropped Off");
            hasCustomer = false;
            SpriteRenderer passengerRenderer = passengerImage.GetComponent<SpriteRenderer>();
            passengerRenderer.enabled = false;
        }
        if (other.tag == "Customer" && !hasCustomer)
        {
            Debug.Log("Customer Picked Up");
            hasCustomer = true;
            Destroy( other.gameObject, destroyDelay);
            SpriteRenderer customerRenderer = other.GetComponent<SpriteRenderer>();
            SpriteRenderer passengerRenderer = passengerImage.GetComponent<SpriteRenderer>();
            passengerRenderer.sprite = customerRenderer.sprite;
            passengerRenderer.enabled = true;
        }
    }
}
