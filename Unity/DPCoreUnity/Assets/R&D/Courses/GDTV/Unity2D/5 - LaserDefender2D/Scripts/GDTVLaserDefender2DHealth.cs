using System;
using System.Collections;
using UnityEngine;

public class GDTVLaserDefender2DHealth : MonoBehaviour
{
    [SerializeField] int health = 50;
    [SerializeField] int scorePerEnemyKill = 50;
    [SerializeField] ParticleSystem hitVFX;

    [SerializeField] bool isPlayer = false;
    [SerializeField] bool usingEnemyAI = false;

    [SerializeField] bool applyCameraShake = false;
    GDTVLaserDefender2DCameraShake cameraShake;

    GDTVLaserDefender2DAudioPlayer audioPlayer;
    GDTVLaserDefender2DScoreKeeper scoreKeeper;
    GDTVLaserDefender2DSceneManager sceneManager;

    void Awake()
    {
        cameraShake = Camera.main.GetComponent<GDTVLaserDefender2DCameraShake>();
        audioPlayer = FindFirstObjectByType<GDTVLaserDefender2DAudioPlayer>();
        scoreKeeper = FindFirstObjectByType<GDTVLaserDefender2DScoreKeeper>();
        sceneManager = FindFirstObjectByType<GDTVLaserDefender2DSceneManager>();
    }

    void OnTriggerEnter2D( Collider2D other)
    {
        GDTVLaserDefender2DDamageDealer damageDealer = other.GetComponent<GDTVLaserDefender2DDamageDealer>();

        if( damageDealer != null )
        {
            TakeDamage( damageDealer.GetDamage() );
            PlayHitVFX();
            ShakeCamera();
            damageDealer.Hit();
        }
    }

    public int GetHealth()
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
                audioPlayer.GetComponent<AudioSource>().Stop(); //stops the music for a moment of silence
                audioPlayer.PlayPlayerDeathSFX();
                sceneManager.LoadGameOverScene();
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
