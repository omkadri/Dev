using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileVania2DEnemyMovement : MonoBehaviour
{
    Rigidbody2D rb2d;
    [SerializeField] float moveSpeed = 1f;
    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        rb2d.velocity = new Vector2( moveSpeed,0f );
    }

    void OnTriggerExit2D( Collider2D other )
    {
        moveSpeed = -moveSpeed;
        FlipEnemyFacing();
    }

    void FlipEnemyFacing()
    {
        transform.localScale = new Vector2( -( Mathf.Sign( rb2d.velocity.x ) ), 1f );
    }
}
