using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DShooterGDTV : MonoBehaviour
{
    [SerializeField] GameObject projectilePrefab;
    [SerializeField] float projectileSpeed = 10f;
    [SerializeField] float projectileLifetime = 5f;
    [SerializeField] float fireRate = 0.2f;

    public bool isFiring;

    Coroutine firingCoroutine;

    void Start()
    {
        
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
                rb2d.velocity = transform.up * projectileSpeed;
            }
            Destroy( instance, projectileLifetime );
            yield return new WaitForSecondsRealtime( fireRate );
        }
    }
}
