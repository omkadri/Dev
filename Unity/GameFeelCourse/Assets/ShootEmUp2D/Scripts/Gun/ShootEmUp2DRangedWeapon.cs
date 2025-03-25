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
    [SerializeField] Transform projectileSpawnPoint;
    [SerializeField] ShootEmUp2DProjectile projectilePrefab;
    [SerializeField] float fireCoolDown = 0.1f;//TODO: replace fireCoolDown with fireRate

    //PRIVATE VARIABLES
    ObjectPool<ShootEmUp2DProjectile> projectilePool;
    static readonly int FIRE_HASH = Animator.StringToHash( "ShootEmUp2DGunFire" );
    Vector2 mousePos;
    float lastFireTime = 0f;
    int minProjectilePoolSize = 20;
    int maxProjectilePoolSize = 40;//TODO: Investigate if these are the best values

    //COMPONENTS
    CinemachineImpulseSource impulseSource;
    Animator animator;


    void Awake()
    {
        impulseSource = GetComponent<CinemachineImpulseSource>();
        animator = GetComponent<Animator>();
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
    }


    public void ReleaseProjectileFromPool( ShootEmUp2DProjectile projectile )
    {
        projectilePool.Release( projectile );
    }

    
    void CreateProjectilePool()//OBJECT POOLING
    {
        projectilePool = new ObjectPool<ShootEmUp2DProjectile>
        (
            () => { return Instantiate( projectilePrefab ); }, //1. Create function - makes new object in the pool
            projectilePrefab => { projectilePrefab.gameObject.SetActive( true ); }, //2. Activate function - passes instantiated object for relative use
            projectilePrefab => { projectilePrefab.gameObject.SetActive( false ); }, //3. Deactivate function - retrieves instantiated object that is no longer in use
            projectilePrefab => { Destroy( projectilePrefab ); }, //4. Destroy function - Destroys object if pool is too big
            false, //5. Checks if ???
            minProjectilePoolSize,//6. Max objects in pool
            maxProjectilePoolSize //7. Max objects in pool
        );
    }


    void HandleShooting()
    {
        if ( Input.GetMouseButton(0) && Time.time >= lastFireTime )//Time.time returns the time since game has started
        {
            
            OnShoot?.Invoke();
        }
    }


    void ShootProjectile()
    {
        ShootEmUp2DProjectile newProjectile = projectilePool.Get();
        newProjectile.Init( this, projectileSpawnPoint.position, mousePos );
    }


    void FireAnimation()
    {
        animator.Play( FIRE_HASH, 0, 0f );
    }


    void FireScreenShake()
    {
        impulseSource.GenerateImpulse();
    }


    void ResetLastFireTime()
    {
        lastFireTime = Time.time + fireCoolDown;
    }


    void RotateGunWithMouse()
    {
        mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
        Vector2 dir = ShootEmUp2DPlayerController.Instance.transform.InverseTransformPoint( mousePos );//This ensures that the gun sprite is flipping properly
        float angle = Mathf.Atan2( dir.y, dir.x ) * Mathf.Rad2Deg;
        transform.localRotation = Quaternion.Euler( 0, 0, angle );
    }
}