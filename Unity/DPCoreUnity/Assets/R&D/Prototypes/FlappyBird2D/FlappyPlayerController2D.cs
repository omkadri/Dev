using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bird : MonoBehaviour
{
    public float jumpForce = 5f;
    public Sprite riseSprite; // Assign this in the Inspector
    public Sprite fallSprite; // Assign this in the Inspector
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

        // Change the sprite based on the bird's vertical velocity
        if (rb.velocity.y > 0)
        {
            spriteRenderer.sprite = riseSprite;
        }
        else if (rb.velocity.y < 0)
        {
            spriteRenderer.sprite = fallSprite;
        }
    }
}
