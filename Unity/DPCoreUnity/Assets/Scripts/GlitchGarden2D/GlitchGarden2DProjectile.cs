using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DProjectile : MonoBehaviour
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
        GlitchGarden2DHealth health = otherCollider.GetComponent<GlitchGarden2DHealth>(); //this line gets the health script attached to the object comm
        GlitchGarden2DAttacker attacker = otherCollider.GetComponent<GlitchGarden2DAttacker>();

        if ( attacker && health ) // if the object we are colliding with has an attacker and health
        {
            health.DealDamage( _damageAmount );
            Destroy( gameObject );
        }        
    }
}