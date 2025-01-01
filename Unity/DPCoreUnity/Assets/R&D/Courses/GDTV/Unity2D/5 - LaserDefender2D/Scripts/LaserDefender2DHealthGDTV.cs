using System;
using System.Collections;
using UnityEngine;

public class LaserDefender2DHealthGDTV : MonoBehaviour
{
    [SerializeField] int health = 50;
    [SerializeField] ParticleSystem hitVFX;

    [SerializeField] bool applyCameraShake = false;
    LaserDefender2DCameraShakeGDTV cameraShake;

    void Awake()
    {
        cameraShake = Camera.main.GetComponent<LaserDefender2DCameraShakeGDTV>();
    }

    void OnTriggerEnter2D( Collider2D other)
    {
        LaserDefender2DDamageDealerGDTV damageDealer = other.GetComponent<LaserDefender2DDamageDealerGDTV>();

        if( damageDealer != null )
        {
            TakeDamage( damageDealer.GetDamage() );
            PlayHitVFX();
            ShakeCamera();
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

    void PlayHitVFX()
    {
        if( hitVFX != null )
        {
            ParticleSystem instance = Instantiate( hitVFX, transform.position, Quaternion.identity );
            float timeBeforeDestruction = instance.main.duration + instance.main.startLifetime.constantMax;
            Destroy( instance.gameObject, timeBeforeDestruction );
        }
    }

    void ShakeCamera()
    {
        if( cameraShake != null && applyCameraShake )
        {
            cameraShake.Play();
        }
    }
}
