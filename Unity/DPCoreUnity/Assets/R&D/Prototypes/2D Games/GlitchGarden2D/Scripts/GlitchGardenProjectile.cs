using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGardenProjectile : MonoBehaviour
{
    [SerializeField] float movementSpeed = 1;
    [SerializeField] float damageAmount = 50f;
    void Update()
    {
        transform.Translate(Vector2.right * movementSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D otherCollider) // we are specifying that this is any "other" objcet that collides with the zucchini
    {
        Debug.Log("I hit: "+ otherCollider.name);

        // Reduce health
        var health = otherCollider.GetComponent<Health>(); //this line gets the health script attached to the object comm
        var attacker = otherCollider.GetComponent<Attacker>();

        if(attacker && health) // if the object we are colliding with has an attacker and health
        {
            health.DealDamage(damageAmount);
            Destroy(gameObject);
        }

        
    }
}


// null error protection
//if (otherCollider.GetComponent<Health>() != null)