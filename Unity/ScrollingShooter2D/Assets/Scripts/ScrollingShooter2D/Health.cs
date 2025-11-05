using System;
using System.Collections;
using UnityEngine;

public class Health : MonoBehaviour
{
    [SerializeField] int _health = 50;
    [SerializeField] int _scorePerEnemyKill = 50;
    [SerializeField] ParticleSystem _hitVFX;

    [SerializeField] bool _isPlayer = false;
    [SerializeField] bool _usingEnemyAI = false;

    [SerializeField] bool _applyCameraShake = false;
    CameraShake _cameraShake;

    AudioPlayer _audioPlayer;
    ScoreKeeper _scoreKeeper;
    GameManager _gameManager;


    void Awake()
    {
        _cameraShake = Camera.main.GetComponent<CameraShake>();
        _audioPlayer = FindFirstObjectByType<AudioPlayer>();
        _scoreKeeper = FindFirstObjectByType<ScoreKeeper>();
        _gameManager = FindFirstObjectByType<GameManager>();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        DamageDealer damageDealer = other.GetComponent<DamageDealer>();

        if (damageDealer != null)
        {
            TakeDamage(damageDealer.GetDamage());
            PlayHitVFX();
            ShakeCamera();
            damageDealer.Hit();
        }
    }


    public int GetHealth()
    {
        return _health;
    }


    private void TakeDamage(int damage)
    {
        PlayDamageSFX();
        _health -= damage;
        if (_health <= 0)
        {
            Die();
        }
    }


    void Die()
    {
        if (!_isPlayer)
        {
            _scoreKeeper.ModifyScore(_scorePerEnemyKill);
        }
        if (!_usingEnemyAI)
            {
                _audioPlayer.GetComponent<AudioSource>().Stop(); //stops the music for a moment of silence
                _audioPlayer.PlayPlayerDeathSFX();
                _gameManager.LoadGameOverScene();
            }
        Destroy(gameObject);
    }


    void PlayHitVFX()
    {
        if (_hitVFX != null)
        {
            ParticleSystem instance = Instantiate(_hitVFX, transform.position, Quaternion.identity);
            float timeBeforeDestruction = instance.main.duration + instance.main.startLifetime.constantMax;
            Destroy(instance.gameObject, timeBeforeDestruction);
        }
    }


    void ShakeCamera()
    {
        if (_cameraShake != null && _applyCameraShake)
        {
            _cameraShake.Play();
        }
    }


    void PlayDamageSFX()
    {
        if (_audioPlayer != null)
        {
            if (_usingEnemyAI)
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