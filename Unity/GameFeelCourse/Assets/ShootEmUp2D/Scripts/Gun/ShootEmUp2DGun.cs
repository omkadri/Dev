using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DGun : MonoBehaviour
{
    //EVENTS
    public static Action OnShoot;

    //PUBLIC VARIABLES
    public Transform ProjectileSpawnPoint => projectileSpawnPoint;//TODO: understand what => is doing.

    //SERIALIZED VARIABLES
    [SerializeField] Transform projectileSpawnPoint;
    [SerializeField] ShootEmUp2DProjectile projectilePrefab;
    [SerializeField] float fireCoolDown = 0.1f;//TODO: replace fireCoolDown with fireRate

    //PRIVATE VARIABLES
    static readonly int FIRE_HASH = Animator.StringToHash( "ShootEmUp2DGunFire" );
    Vector2 mousePos;
    float lastFireTime = 0f;

    //COMPONENTS
    Animator animator;


    void Awake()
    {
        animator = GetComponent<Animator>();
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
        //animate
        //sfx
        //muzzle flash
    }


    void OnDisable()
    {
        OnShoot -= ResetLastFireTime;
        OnShoot -= ShootProjectile;
        OnShoot -= FireAnimation;
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
        ShootEmUp2DProjectile newProjectile = Instantiate(projectilePrefab, projectileSpawnPoint.position, Quaternion.identity);
        newProjectile.Init( projectileSpawnPoint.position, mousePos );
    }


    void FireAnimation()
    {
        animator.Play( FIRE_HASH, 0, 0f );
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