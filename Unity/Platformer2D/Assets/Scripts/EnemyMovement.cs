using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    Rigidbody2D rb2d;
    [SerializeField] float _moveSpeed = 1f;


    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void Update()
    {
        rb2d.linearVelocity = new Vector2(_moveSpeed,0f);
    }


    void OnTriggerExit2D(Collider2D other)
    {
        _moveSpeed = -_moveSpeed;
        FlipEnemyFacing();
    }


    void FlipEnemyFacing()
    {
        transform.localScale = new Vector2(-(Mathf.Sign(rb2d.linearVelocity.x)), 1f);
    }
}