using System;
using System.Collections;
using UnityEngine;

public class LaserDefender2DHealth : MonoBehaviour
{
    [SerializeField] int health = 50;
    [SerializeField] int scorePerEnemyKill = 50;
    [SerializeField] ParticleSystem hitVFX;

    [SerializeField] bool isPlayer = false;
    [SerializeField] bool usingEnemyAI = false;

    [SerializeField] bool applyCameraShake = false;
    LaserDefender2DCameraShake cameraShake;

    LaserDefender2DAudioPlayer audioPlayer;
    LaserDefender2DScoreKeeper scoreKeeper;
    LaserDefender2DSceneManager sceneManager;


    void Awake()
    {
        cameraShake = Camera.main.GetComponent<LaserDefender2DCameraShake>();
        audioPlayer = FindFirstObjectByType<LaserDefender2DAudioPlayer>();
        scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
        sceneManager = FindFirstObjectByType<LaserDefender2DSceneManager>();
    }


    void OnTriggerEnter2D( Collider2D other)
    {
        LaserDefender2DDamageDealer damageDealer = other.GetComponent<LaserDefender2DDamageDealer>();

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
        if( audioPlayer != null )
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
