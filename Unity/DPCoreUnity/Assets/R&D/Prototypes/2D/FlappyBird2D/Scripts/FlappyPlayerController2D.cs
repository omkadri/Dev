using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlappyPlayerController2D : MonoBehaviour
{
    public float jumpForce = 5f;
    private Rigidbody2D rb2d;
    private SpriteRenderer spriteRenderer;


    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }
    

    void OnJump()
    {
            rb2d.linearVelocity = Vector2.up * jumpForce;
    }
}
