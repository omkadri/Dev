using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DProjectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 10f;
    [SerializeField] int damageAmount = 1;

    Vector2 fireDir;

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void FixedUpdate()
    {
        rb2d.linearVelocity = fireDir * moveSpeed;
    }


    public void Init( Vector2 projectileSpawnPos, Vector2 mousePos)
    {
        fireDir = ( mousePos - projectileSpawnPos ).normalized;
    }


    void OnTriggerEnter2D(Collider2D other) 
    {
        ShootEmUp2DHealth health = other.gameObject.GetComponent<ShootEmUp2DHealth>();
        health?.TakeDamage(damageAmount);
        Destroy(this.gameObject);
    }
}