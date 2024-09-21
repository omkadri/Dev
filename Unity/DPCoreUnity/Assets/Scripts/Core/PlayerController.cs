using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float jumpForce = 12f; 
    public float jumpAscendSpeed = 15f; 
    public float jumpDescendSpeed = 4f; 
    public float maxJumpTime = 0.5f; 
    public float speed = 5f; 
    public float sprintMultiplier = 2f; // Sprint speed multiplier

    private Rigidbody2D rb;
    private bool isGrounded;
    private bool isJumping;
    private float jumpTimeCounter;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        HandleMovement();
        HandleJump();
        CheckGrounded(); // Check if grounded every frame
    }

    private void HandleMovement()
    {
        float moveInput = Input.GetAxis("Horizontal"); 
        float currentSpeed = speed;

        // Check if sprinting
        if (Input.GetKey(KeyCode.LeftShift))
        {
            currentSpeed *= sprintMultiplier; // Increase speed if sprinting
        }

        // Smooth movement
        float targetSpeed = moveInput * currentSpeed;
        rb.velocity = new Vector2(Mathf.Lerp(rb.velocity.x, targetSpeed, Time.deltaTime * 10f), rb.velocity.y);
    }

    private void HandleJump()
    {
        if (isGrounded && Input.GetKeyDown(KeyCode.Space)) // Tap to jump
        {
            rb.velocity = new Vector2(rb.velocity.x, jumpAscendSpeed); // Initial jump
            isJumping = true;
            jumpTimeCounter = 0f; // Reset jump time counter
        }

        if (isJumping)
        {
            jumpTimeCounter += Time.deltaTime;

            // Continue ascending while the jump button is held down
            if (Input.GetKey(KeyCode.Space) && jumpTimeCounter < maxJumpTime)
            {
                rb.velocity = new Vector2(rb.velocity.x, jumpAscendSpeed); // Continue ascending
            }
            else if (rb.velocity.y < 0) // If descending
            {
                rb.velocity = new Vector2(rb.velocity.x, Mathf.Max(rb.velocity.y, -jumpDescendSpeed)); // Adjust descent speed
            }

            // End jumping when the button is released or max time reached
            if (Input.GetKeyUp(KeyCode.Space) || jumpTimeCounter >= maxJumpTime)
            {
                isJumping = false; // Reset jumping state
            }
        }
    }

    private void CheckGrounded()
    {
        // Use a raycast to check if the player is grounded
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 1f, LayerMask.GetMask("Ground"));
        isGrounded = hit.collider != null;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground")) // Check for ground collision
        {
            isGrounded = true;
            isJumping = false; // Reset jumping state
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground")) // Reset grounded state
        {
            isGrounded = false;
        }
    }
}
