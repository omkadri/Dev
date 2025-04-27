using UnityEngine;
using Unity.Cinemachine;
using System;
using System.Collections;

public class ShootEmUp2DGrenade : MonoBehaviour
{
    public Action OnGrenadeExplode; //we don't want a static action because there will be many instances of grenades. 
    public Action OnBeep;

    [SerializeField] GameObject _explodeVFX;
    [SerializeField] float _launchForce = 15f;
    [SerializeField] float _torqueAmount = 0.5f;
    [SerializeField] float _explosionRadius = 3.5f;
    [SerializeField] LayerMask _enemyLayerMask;
    [SerializeField] int _damageAmount = 3;
    [SerializeField] GameObject _grenadeLight;
    [SerializeField] float _lightBlinkTime = 0.15f; //TODO: better name???
    [SerializeField] int _totalBlinks = 3;
    [SerializeField] float _explodeTime = 3f;

    int _currentBlinks;
    Rigidbody2D _rb2d;
    CinemachineImpulseSource _impulseSource;


    void OnEnable()
    {
        OnGrenadeExplode += GrenadeExplosion;
        OnGrenadeExplode += GrenadeScreenShake;
        OnGrenadeExplode += DamageEnemiesInRadius;
        OnBeep += BlinkLight;
    }


    void OnDisable()
    {
        OnGrenadeExplode -= GrenadeExplosion;
        OnGrenadeExplode -= GrenadeScreenShake;
        OnGrenadeExplode -= DamageEnemiesInRadius;
        OnBeep -= BlinkLight;
    }


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _impulseSource = GetComponent<CinemachineImpulseSource>();
    }


    void Start()
    {
        LaunchGrenade();
        StartCoroutine( CountdownExplodeRoutine() );
    }


    void OnCollisionEnter2D( Collision2D other )
    {
        if( other.gameObject.GetComponent<ShootEmUp2DEnemy>() )
        {
            OnGrenadeExplode?.Invoke();
        }
    }


    void LaunchGrenade()
    {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition ); //TODO: Investigate exactly what ScreenToWorldPoint does
        Vector2 dirToMouse = ( mousePos - (Vector2)transform.position ).normalized; //TODO: investigate vector2 casting and normalization
        _rb2d.AddForce( dirToMouse * _launchForce, ForceMode2D.Impulse );
        _rb2d.AddTorque( _torqueAmount, ForceMode2D.Impulse );
    }


    void GrenadeExplosion()
    {
        Instantiate( _explodeVFX, transform.position, Quaternion.identity );
        Destroy( gameObject );
    }


    void GrenadeScreenShake()
    {
        _impulseSource.GenerateImpulse();
    }


    void DamageEnemiesInRadius() //TODO: think of better name
    {
        Collider2D[] hits = Physics2D.OverlapCircleAll( transform.position, _explosionRadius, _enemyLayerMask );
        foreach ( Collider2D hit in hits )
        {
            ShootEmUp2DHealth health = hit.GetComponent<ShootEmUp2DHealth>();
            health?.TakeDamage( _damageAmount );
        }
    }


    IEnumerator CountdownExplodeRoutine()
    {
        _grenadeLight.SetActive( false );
        while ( _currentBlinks < _totalBlinks )
        {
            yield return new WaitForSeconds( _explodeTime / _totalBlinks ); //using basic algebra to sync up the beeps with the time
            OnBeep?.Invoke();
            yield return new WaitForSeconds( _lightBlinkTime );//TODO: Investigate issue where lowering this value shortens the explode time of the grenade????
            _grenadeLight.SetActive( false );
        }

        OnGrenadeExplode?.Invoke();
    }


    void BlinkLight()
    {
        _grenadeLight.SetActive( true );
        _currentBlinks++;
    }
}