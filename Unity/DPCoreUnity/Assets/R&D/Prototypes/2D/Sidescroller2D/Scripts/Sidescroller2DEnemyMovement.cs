using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sidescroller2DEnemyMovement : MonoBehaviour
{
    Rigidbody2D rb2d;
    [SerializeField] float moveSpeed = 1f;
    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        rb2d.linearVelocity = new Vector2( moveSpeed,0f );
    }

    void OnTriggerExit2D( Collider2D other )
    {
        moveSpeed = -moveSpeed;
        FlipEnemyFacing();
    }

    void FlipEnemyFacing()
    {
        transform.localScale = new Vector2( -( Mathf.Sign( rb2d.linearVelocity.x ) ), 1f );
    }
}
