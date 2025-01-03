using System.Collections;
using UnityEngine;

public class LaserDefender2DShooter : MonoBehaviour
{
    [Header( "General" )]
    [SerializeField] GameObject projectilePrefab;
    [SerializeField] float projectileSpeed = 10f;
    [SerializeField] float projectileLifetime = 5f;
    [SerializeField] float baseFireRate = 0.2f;

    [Header( "Enemy AI" )]
    [SerializeField] bool useEnemyAI;
    [SerializeField] float fireRateVariance = 0f;
    [SerializeField] float minFireRate = 0.1f;

    [HideInInspector] public bool isFiring;

    Coroutine firingCoroutine;
    LaserDefender2DAudioPlayer audioPlayer;

    void Awake()
    {
        audioPlayer = FindFirstObjectByType<LaserDefender2DAudioPlayer>();
    }

    void Start()
    {
        if ( useEnemyAI )
        {
            isFiring = true;
        }   
    }

    void Update()
    {
        Fire();
    }

    void Fire()
    {
        if( isFiring && firingCoroutine == null )//ensure that firingCoroutine is not being called twice
        {
            firingCoroutine = StartCoroutine( FireContinuously() );
        }
        else if( !isFiring && firingCoroutine != null)
        {
            StopCoroutine( firingCoroutine );
            firingCoroutine = null;
        }
    }

    IEnumerator FireContinuously()
    {
        while( true )
        {
            GameObject instance = Instantiate( projectilePrefab, transform.position, Quaternion.identity );
            Rigidbody2D rb2d = instance.GetComponent<Rigidbody2D>();
            if ( rb2d != null )
            {
                if( useEnemyAI )
                {
                    rb2d.linearVelocity = -transform.up * projectileSpeed; //the negative sign reverses the projectile to come towards the player
                }
                else
                {
                    rb2d.linearVelocity = transform.up * projectileSpeed;
                }
            }
            Destroy( instance, projectileLifetime );

            float timeToNextProjectile = Random.Range( ( baseFireRate - fireRateVariance ), ( baseFireRate + fireRateVariance ) );

            timeToNextProjectile = Mathf.Clamp( timeToNextProjectile, minFireRate, float.MaxValue );

            PlayShootingSFX();
            
            yield return new WaitForSecondsRealtime( timeToNextProjectile );
        }
    }

    void PlayShootingSFX()
    {
        if( audioPlayer != null )
        {
            if( useEnemyAI )
            {
                audioPlayer.PlayEnemyShootingSFX();
            }
            else
            {
                audioPlayer.PlayPlayerShootingSFX();
            }
        }
    }
}
