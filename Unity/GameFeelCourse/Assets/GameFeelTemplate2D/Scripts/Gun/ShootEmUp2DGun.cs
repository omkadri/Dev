using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DGun : MonoBehaviour
{
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


    void HandleShooting()
    {
        if ( Input.GetMouseButton(0) && Time.time >= lastFireTime )//Time.time returns the time since game has started
        {
            ShootProjectile();
        }
    }


    void ShootProjectile()
    {
        lastFireTime = Time.time + fireCoolDown;
        ShootEmUp2DProjectile newProjectile = Instantiate(projectilePrefab, projectileSpawnPoint.position, Quaternion.identity);
        newProjectile.Init( projectileSpawnPoint.position, mousePos );
    }


    void RotateGunWithMouse()
    {
        mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
        Vector2 dir = ShootEmUp2DPlayerController.Instance.transform.InverseTransformPoint( mousePos );//This ensures that the gun sprite is flipping properly
        float angle = Mathf.Atan2( dir.y, dir.x ) * Mathf.Rad2Deg;
        transform.localRotation = Quaternion.Euler( 0, 0, angle );
    }
}