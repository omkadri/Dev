using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DHealth : MonoBehaviour
{
    [SerializeField] float _health = 100f;
    [SerializeField] GameObject _deathVFX;


    public void DealDamage( float damage )
    {
        _health -= damage;
        if ( _health <= 0 )
        {
            TriggerDeathVFX();
            Destroy( gameObject );
        }
    }
    

    private void TriggerDeathVFX()
    {
        if ( !_deathVFX )
        { 
            return;
        }

        GameObject deathVFXObject = Instantiate( _deathVFX, transform.position, transform.rotation );
        Destroy( deathVFXObject, 1f );
    }
}