using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DPlayerController : MonoBehaviour
{
    public static GameFeelTemplate2DPlayerController Instance;

    [SerializeField] Transform feetTransform;
    [SerializeField] Vector2 groundCheck;
    [SerializeField] LayerMask groundLayer;
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


    public bool IsFacingRight()
    {
        return transform.eulerAngles.y == 0;
    }


    bool CheckGrounded()
    {
        Collider2D isGrounded = Physics2D.OverlapBox( feetTransform.position, groundCheck, 0f, groundLayer );//This draws a collider box on the ground layer at the player feet positions
        return isGrounded;
    }


    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube( feetTransform.position, groundCheck );//DEBUG DRAW
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
        if ( Input.GetKeyDown(KeyCode.Space) && CheckGrounded() ) 
        {
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