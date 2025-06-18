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


    private void OnTriggerEnter2D( Collider2D other )
    {

        LaneDefense2DHealth health = other.GetComponent<LaneDefense2DHealth>();
        LaneDefense2DAttacker attacker = other.GetComponent<LaneDefense2DAttacker>();

        if ( attacker && health )
        {
            health.DealDamage( _damageAmount );
            Destroy( gameObject );
        }        
    }
}