using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DProjectile : MonoBehaviour
{
    [SerializeField] float _movementSpeed = 2f;
    [SerializeField] float _damageAmount = 50f;


    void Update()
    {
        transform.Translate( Vector2.right * _movementSpeed * Time.deltaTime );
    }


    private void OnTriggerEnter2D( Collider2D otherCollider ) // we are specifying that this is any "other" objcet that collides with the zucchini
    {
        Debug.Log( "I hit: "+ otherCollider.name );

        // Reduce health
        LaneDefense2DHealth health = otherCollider.GetComponent<LaneDefense2DHealth>(); //this line gets the health script attached to the object comm
        LaneDefense2DAttacker attacker = otherCollider.GetComponent<LaneDefense2DAttacker>();

        if ( attacker && health ) // if the object we are colliding with has an attacker and health
        {
            health.DealDamage( _damageAmount );
            Destroy( gameObject );
        }        
    }
}