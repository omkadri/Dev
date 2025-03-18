using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DPlayerController : MonoBehaviour
{
    public static GameFeelTemplate2DPlayerController Instance;

    [SerializeField] float moveSpeed = 5f;
    [SerializeField] float jumpStrength = 7f;

    bool isGrounded = false;
    Vector2 movement;

    Rigidbody2D rb2d;


    public void Awake() 
    {
        if (Instance == null) 
        { 
            Instance = this; 
        }

        rb2d = GetComponent<Rigidbody2D>();
    }


    void Update()
    {
        GatherInput();
        Jump();
        HandleSpriteFlip();
    }


    void FixedUpdate() 
    {
        Move();
    }


    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            isGrounded = true;
        }
    }


    void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            isGrounded = false;
        }
    }


    public bool IsFacingRight()
    {
        return transform.eulerAngles.y == 0;
    }


    void GatherInput()
    {
        float moveX = Input.GetAxis("Horizontal");
        movement = new Vector2(moveX * moveSpeed, rb2d.linearVelocity.y);
    }


    void Move() 
    {

        rb2d.linearVelocity = movement;
    }


    void Jump()
    {
        if (Input.GetKeyDown(KeyCode.Space) && isGrounded) {
            rb2d.AddForce(Vector2.up * jumpStrength, ForceMode2D.Impulse);
        }
    }


    void HandleSpriteFlip()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        if (mousePos.x < transform.position.x)
        {
            transform.eulerAngles = new Vector3(0f, -180f, 0f);
        }
        else
        {
            transform.eulerAngles = new Vector3(0f, 0f, 0f);
        }
    } 
}