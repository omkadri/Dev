using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DHealth : MonoBehaviour
{
    [SerializeField] float health = 100f;
    [SerializeField] GameObject deathVFX;


    public void DealDamage( float damage )
    {
        health -= damage;
        if ( health <= 0 )
        {
            TriggerDeathVFX();
            Destroy( gameObject );
        }
    }
    

    private void TriggerDeathVFX()
    {
        //protects us against null returns
        if ( !deathVFX )
        { 
            return;
        }

        //instantiates vfx particle, and then destroy it
        GameObject deathVFXObject = Instantiate( deathVFX, transform.position, transform.rotation );
        Destroy( deathVFXObject, 1f );
    }
}
