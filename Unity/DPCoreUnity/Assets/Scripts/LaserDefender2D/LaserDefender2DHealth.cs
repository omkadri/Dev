using System;
using System.Collections;
using UnityEngine;

public class LaserDefender2DHealth : MonoBehaviour
{
    [SerializeField] int _health = 50;
    [SerializeField] int _scorePerEnemyKill = 50;
    [SerializeField] ParticleSystem _hitVFX;

    [SerializeField] bool _isPlayer = false;
    [SerializeField] bool _usingEnemyAI = false;

    [SerializeField] bool _applyCameraShake = false;
    LaserDefender2DCameraShake _cameraShake;

    LaserDefender2DAudioPlayer _audioPlayer;
    LaserDefender2DScoreKeeper _scoreKeeper;
    LaserDefender2DSceneManager _sceneManager;


    void Awake()
    {
        _cameraShake = Camera.main.GetComponent<LaserDefender2DCameraShake>();
        _audioPlayer = FindFirstObjectByType<LaserDefender2DAudioPlayer>();
        _scoreKeeper = FindFirstObjectByType<LaserDefender2DScoreKeeper>();
        _sceneManager = FindFirstObjectByType<LaserDefender2DSceneManager>();
    }


    void OnTriggerEnter2D( Collider2D other)
    {
        LaserDefender2DDamageDealer damageDealer = other.GetComponent<LaserDefender2DDamageDealer>();

        if ( damageDealer != null )
        {
            TakeDamage( damageDealer.GetDamage() );
            PlayHitVFX();
            ShakeCamera();
            damageDealer.Hit();
        }
    }


    public int GetHealth()
    {
        return _health;
    }


    private void TakeDamage( int damage )
    {
        PlayDamageSFX();
        _health -= damage;
        if ( _health <= 0 )
        {
            Die();
        }
    }


    void Die()
    {
        if ( !_isPlayer )
        {
            _scoreKeeper.ModifyScore( _scorePerEnemyKill );
        }
        if ( !_usingEnemyAI )
            {
                _audioPlayer.GetComponent<AudioSource>().Stop(); //stops the music for a moment of silence
                _audioPlayer.PlayPlayerDeathSFX();
                _sceneManager.LoadGameOverScene();
            }
        Destroy( gameObject );
    }


    void PlayHitVFX()
    {
        if ( _hitVFX != null )
        {
            ParticleSystem instance = Instantiate( _hitVFX, transform.position, Quaternion.identity );
            float timeBeforeDestruction = instance.main.duration + instance.main.startLifetime.constantMax;
            Destroy( instance.gameObject, timeBeforeDestruction );
        }
    }


    void ShakeCamera()
    {
        if ( _cameraShake != null && _applyCameraShake )
        {
            _cameraShake.Play();
        }
    }


    void PlayDamageSFX()
    {
        if ( _audioPlayer != null )
        {
            if ( _usingEnemyAI )
            {
                _audioPlayer.PlayEnemyDamageSFX();
            }
            else
            {
                _audioPlayer.PlayPlayerDamageSFX();
            }
        }
    }
}