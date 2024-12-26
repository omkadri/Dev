using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DHealthGDTV : MonoBehaviour
{
    [SerializeField] int health = 50;

    void OnTriggerEnter2D( Collider2D other)
    {
        LaserDefender2DDamageDealerGDTV damageDealer = other.GetComponent<LaserDefender2DDamageDealerGDTV>();

        if( damageDealer != null )
        {
            TakeDamage( damageDealer.GetDamage() );
            damageDealer.Hit();
        }
    }

    private void TakeDamage( int damage )
    {
        health -= damage;
        if( health <= 0 )
        {
            Destroy( gameObject );
        }
    }
}
