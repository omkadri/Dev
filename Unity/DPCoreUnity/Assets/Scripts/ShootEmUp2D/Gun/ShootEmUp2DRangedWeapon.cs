using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;
using Unity.Cinemachine;

public class ShootEmUp2DRangedWeapon : MonoBehaviour
{
    //EVENTS
    public static Action OnShoot;

    //SERIALIZED VARIABLES
    [SerializeField] Transform _projectileSpawnPoint;
    [SerializeField] ShootEmUp2DProjectile _projectilePrefab;
    [SerializeField] float _fireCoolDown = 0.1f;//TODO: replace fireCoolDown with fireRate
    [SerializeField] GameObject _muzzleFlash;
    [SerializeField] float _muzzleFlashTime = 0.05f;

    //PRIVATE VARIABLES
    private Coroutine _muzzleFlashRoutine; //we cache the coroutine for control. this ensures that only one coroutine is playing at a time
    ObjectPool<ShootEmUp2DProjectile> _projectilePool;
    static readonly int FIRE_HASH = Animator.StringToHash( "ShootEmUp2DGunFire" );
    Vector2 _mousePos;
    float _lastFireTime = 0f;
    int _minProjectilePoolSize = 20;
    int _maxProjectilePoolSize = 40;//TODO: Investigate if these are the best values

    //COMPONENTS
    CinemachineImpulseSource _impulseSource;
    Animator _animator;


    void Awake()
    {
        _impulseSource = GetComponent<CinemachineImpulseSource>();
        _animator = GetComponent<Animator>();
    }


    void Start()
    {
        CreateProjectilePool();
    }


    void Update()
    {
        HandleShooting();
        RotateGunWithMouse();
    }


    void OnEnable()
    {
        OnShoot += ResetLastFireTime;
        OnShoot += ShootProjectile;
        OnShoot += FireAnimation;
        OnShoot += FireScreenShake;
        OnShoot += MuzzleFlash;
        //animate
        //sfx
        //muzzle flash
    }


    void OnDisable()
    {
        OnShoot -= ResetLastFireTime;
        OnShoot -= ShootProjectile;
        OnShoot -= FireAnimation;
        OnShoot -= FireScreenShake;
        OnShoot -= MuzzleFlash;
    }


    public void ReleaseProjectileFromPool( ShootEmUp2DProjectile projectile )
    {
        _projectilePool.Release( projectile );
    }

    
    void CreateProjectilePool()//OBJECT POOLING
    {
        _projectilePool = new ObjectPool<ShootEmUp2DProjectile>
        (
            () => { return Instantiate( _projectilePrefab ); }, //1. Create function - makes new object in the pool
            projectile => { projectile.gameObject.SetActive( true ); }, //2. Activate function - passes instantiated object for relative use
            projectile => { projectile.gameObject.SetActive( false ); }, //3. Deactivate function - retrieves instantiated object that is no longer in use
            projectile => { Destroy( projectile ); }, //4. Destroy function - Destroys object if pool is too big
            false, //5. Checks if ???
            _minProjectilePoolSize,//6. Max objects in pool
            _maxProjectilePoolSize //7. Max objects in pool
        );
    }


    void HandleShooting()
    {
        if ( Input.GetMouseButton(0) && Time.time >= _lastFireTime )//Time.time returns the time since game has started
        {
            OnShoot?.Invoke();
        }
    }


    void ShootProjectile()
    {
        ShootEmUp2DProjectile newProjectile = _projectilePool.Get();
        newProjectile.Init( this, _projectileSpawnPoint.position, _mousePos );
    }


    void FireAnimation()
    {
        _animator.Play( FIRE_HASH, 0, 0f );
    }


    void FireScreenShake()
    {
        _impulseSource.GenerateImpulse();
    }


    void ResetLastFireTime()
    {
        _lastFireTime = Time.time + _fireCoolDown;
    }


    void RotateGunWithMouse()
    {
        _mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
        Vector2 dir = ShootEmUp2DPlayerController.Instance.transform.InverseTransformPoint( _mousePos );//This ensures that the gun sprite is flipping properly
        float angle = Mathf.Atan2( dir.y, dir.x ) * Mathf.Rad2Deg;
        transform.localRotation = Quaternion.Euler( 0, 0, angle );
    }


    void MuzzleFlash()
    {
        if( _muzzleFlashRoutine != null)
        {
            StopCoroutine( _muzzleFlashRoutine ); //this ensures that there is no muzzle flash overlap
        }

        _muzzleFlash.SetActive( true );
        _muzzleFlashRoutine = StartCoroutine( MuzzleFlashRoutine() );
    }


    IEnumerator MuzzleFlashRoutine()
    {
        yield return new WaitForSeconds( _muzzleFlashTime );
        _muzzleFlash.SetActive( false );
    }
}