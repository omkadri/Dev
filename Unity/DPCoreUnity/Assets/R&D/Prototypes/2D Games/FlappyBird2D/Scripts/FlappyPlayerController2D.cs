using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlappyPlayerController2D : MonoBehaviour
{
    public float jumpForce = 5f;
    private Rigidbody2D rb;
    private SpriteRenderer spriteRenderer;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        if (Input.GetButtonDown("Jump"))
        {
            rb.velocity = Vector2.up * jumpForce;
        }
    }
}
