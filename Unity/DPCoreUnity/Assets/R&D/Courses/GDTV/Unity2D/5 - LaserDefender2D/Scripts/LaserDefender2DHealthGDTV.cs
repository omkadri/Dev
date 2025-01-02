using System;
using System.Collections;
using UnityEngine;

public class LaserDefender2DHealthGDTV : MonoBehaviour
{
    [SerializeField] int health = 50;
    [SerializeField] ParticleSystem hitVFX;

    [SerializeField] bool applyCameraShake = false;
    [SerializeField] bool usingEnemyAI = false;
    LaserDefender2DCameraShakeGDTV cameraShake;
    LaserDefender2DAudioPlayerGDTV audioPlayer;

    void Awake()
    {
        cameraShake = Camera.main.GetComponent<LaserDefender2DCameraShakeGDTV>();
        audioPlayer = FindFirstObjectByType<LaserDefender2DAudioPlayerGDTV>();
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
        PlayDamageSFX();
        health -= damage;
        if( health <= 0 )
        {
            if( !usingEnemyAI )
            {
                audioPlayer.PlayPlayerDeathSFX();
            }
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

    void PlayDamageSFX()
    {
        if(audioPlayer != null)
        {
            if( usingEnemyAI )
            {
                audioPlayer.PlayEnemyDamageSFX();
            }
            else
            {
                audioPlayer.PlayPlayerDamageSFX();
            }
        }
    }
}
