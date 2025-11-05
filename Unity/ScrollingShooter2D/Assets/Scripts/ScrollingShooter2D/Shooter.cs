using System.Collections;
using UnityEngine;

public class Shooter : MonoBehaviour
{
    [Header("General")]
    [SerializeField] GameObject _projectilePrefab;
    [SerializeField] float _projectileSpeed = 10f;
    [SerializeField] float _projectileLifetime = 5f;
    [SerializeField] float _baseFireRate = 0.2f;

    [Header("Enemy AI")]
    [SerializeField] bool _useEnemyAI;
    [SerializeField] float _fireRateVariance = 0f;
    [SerializeField] float _minFireRate = 0.1f;

    [HideInInspector] public bool _isFiring;//TODO: Create public getter

    Coroutine _firingCoroutine;
    AudioPlayer _audioPlayer;


    void Awake()
    {
        _audioPlayer = FindFirstObjectByType<AudioPlayer>();
    }


    void Start()
    {
        if (_useEnemyAI)
        {
            _isFiring = true;
        }   
    }


    void Update()
    {
        Fire();
    }


    void Fire()
    {
        if (_isFiring && _firingCoroutine == null)//ensure that firingCoroutine is not being called twice
        {
            _firingCoroutine = StartCoroutine(FireContinuouslyRoutine());
        }
        else if (!_isFiring && _firingCoroutine != null)
        {
            StopCoroutine(_firingCoroutine);
            _firingCoroutine = null;
        }
    }


    IEnumerator FireContinuouslyRoutine()
    {
        while(true)
        {
            GameObject instance = Instantiate(_projectilePrefab, transform.position, Quaternion.identity);
            Rigidbody2D rb2d = instance.GetComponent<Rigidbody2D>();
            if (rb2d != null)
            {
                if (_useEnemyAI)
                {
                    rb2d.linearVelocity = -transform.up * _projectileSpeed; //the negative sign reverses the projectile to come towards the player
                }
                else
                {
                    rb2d.linearVelocity = transform.up * _projectileSpeed;
                }
            }
            Destroy(instance, _projectileLifetime);

            float timeToNextProjectile = Random.Range((_baseFireRate - _fireRateVariance), (_baseFireRate + _fireRateVariance));

            timeToNextProjectile = Mathf.Clamp(timeToNextProjectile, _minFireRate, float.MaxValue);

            PlayShootingSFX();
            
            yield return new WaitForSecondsRealtime(timeToNextProjectile);
        }
    }


    void PlayShootingSFX()
    {
        if (_audioPlayer != null)
        {
            if (_useEnemyAI)
            {
                _audioPlayer.PlayEnemyShootingSFX();
            }
            else
            {
                _audioPlayer.PlayPlayerShootingSFX();
            }
        }
    }
}