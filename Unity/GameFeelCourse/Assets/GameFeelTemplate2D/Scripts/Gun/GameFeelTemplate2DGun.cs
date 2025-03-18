using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DGun : MonoBehaviour
{
    public Transform ProjectileSpawnPoint => projectileSpawnPoint;

    [SerializeField] Transform projectileSpawnPoint;
    [SerializeField] GameFeelTemplate2DProjectile projectilePrefab;


    void Update()
    {
        Shoot();
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
        GameFeelTemplate2DProjectile newProjectile = Instantiate(projectilePrefab, projectileSpawnPoint.position, Quaternion.identity);
    }
}