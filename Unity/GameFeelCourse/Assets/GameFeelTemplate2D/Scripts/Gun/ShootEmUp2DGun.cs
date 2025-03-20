using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DGun : MonoBehaviour
{
    public Transform ProjectileSpawnPoint => projectileSpawnPoint;

    [SerializeField] Transform projectileSpawnPoint;
    [SerializeField] ShootEmUp2DProjectile projectilePrefab;

    Vector2 mousePos;


    void Update()
    {
        Shoot();
        RotateGunWithMouse();
    }


    void Shoot()
    {
        if (Input.GetMouseButtonDown(0)) 
        {
            ShootProjectile();
        }
    }


    void ShootProjectile()
    {
        ShootEmUp2DProjectile newProjectile = Instantiate(projectilePrefab, projectileSpawnPoint.position, Quaternion.identity);
    }


    void RotateGunWithMouse()
    {
        mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
        Vector2 dir = ShootEmUp2DPlayerController.Instance.transform.InverseTransformPoint( mousePos );//This ensures that the gun sprite is flipping properly
        float angle = Mathf.Atan2( dir.y, dir.x ) * Mathf.Rad2Deg;
        transform.localRotation = Quaternion.Euler( 0, 0, angle );
    }
}