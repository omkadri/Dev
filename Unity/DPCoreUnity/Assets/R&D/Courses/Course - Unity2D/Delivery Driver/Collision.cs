using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Collision : MonoBehaviour
{
    void OnCollisionEnter2D( Collision2D other ) 
    {
        Debug.Log("Collision Entered!");
    }
    
   void OnTriggerEnter2D( Collider2D other )
   {
        Debug.Log("Trigger Activated!");
   }

    void OnTriggerExit2D( Collider2D other )
   {
        Debug.Log("Trigger Exited!");
   }

    void OnCollisionExit2D( Collision2D other ) 
    {
        Debug.Log("Collision Exited!");
    }
}
