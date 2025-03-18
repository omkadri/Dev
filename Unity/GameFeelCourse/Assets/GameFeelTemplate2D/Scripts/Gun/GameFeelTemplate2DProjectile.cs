using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DProjectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 10f;
    [SerializeField] int damageAmount = 1;

    Vector2 fireDir;

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void Start() 
    {
        if (GameFeelTemplate2DPlayerController.Instance.IsFacingRight()) 
        {
            fireDir = Vector2.right;
        } 
        else 
        {
            fireDir = Vector2.left;
        }
    }


    void FixedUpdate()
    {
        rb2d.linearVelocity = fireDir * moveSpeed;
    }


    void OnTriggerEnter2D(Collider2D other) 
    {
        GameFeelTemplate2DHealth health = other.gameObject.GetComponent<GameFeelTemplate2DHealth>();
        health?.TakeDamage(damageAmount);
        Destroy(this.gameObject);
    }
}