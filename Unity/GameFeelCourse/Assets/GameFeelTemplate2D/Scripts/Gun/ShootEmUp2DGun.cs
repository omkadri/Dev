using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DGun : MonoBehaviour
{
    public static Action OnShoot;
    public Transform ProjectileSpawnPoint => projectileSpawnPoint;

    [SerializeField] Transform projectileSpawnPoint;
    [SerializeField] ShootEmUp2DProjectile projectilePrefab;
    [SerializeField] float fireCoolDown = 0.1f;//TODO: replace fireCoolDown with fireRate

    Vector2 mousePos;
    float lastFireTime = 0f;


    void Update()
    {
        HandleShooting();
        RotateGunWithMouse();
    }


    void OnEnable()
    {
        OnShoot += ResetLastFireTime;
        OnShoot += ShootProjectile;
        //animate
        //sfx
        //muzzle flash
    }


    void OnDisable()
    {
        OnShoot -= ResetLastFireTime;
        OnShoot -= ShootProjectile;
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