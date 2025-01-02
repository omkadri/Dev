using System;
using System.Collections;
using UnityEngine;

public class LaserDefender2DHealthGDTV : MonoBehaviour
{
    [SerializeField] int health = 50;
    [SerializeField] int scorePerEnemyKill = 50;
    [SerializeField] ParticleSystem hitVFX;

    [SerializeField] bool isPlayer = false;
    [SerializeField] bool usingEnemyAI = false;

    [SerializeField] bool applyCameraShake = false;
    LaserDefender2DCameraShakeGDTV cameraShake;

    LaserDefender2DAudioPlayerGDTV audioPlayer;
    LaserDefender2DScoreKeeperGDTV scoreKeeper;

    void Awake()
    {
        cameraShake = Camera.main.GetComponent<LaserDefender2DCameraShakeGDTV>();
        audioPlayer = FindFirstObjectByType<LaserDefender2DAudioPlayerGDTV>();
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeperGDTV>();
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

    public int GetHealthAmount()
    {
        return health;
    }

    private void TakeDamage( int damage )
    {
        PlayDamageSFX();
        health -= damage;
        if( health <= 0 )
        {
            Die();
        }
    }

    void Die()
    {
        if ( !isPlayer )
        {
            scoreKeeper.ModifyScore( scorePerEnemyKill );
        }
        if( !usingEnemyAI )
            {
                audioPlayer.PlayPlayerDeathSFX();
            }
        Destroy( gameObject );
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
