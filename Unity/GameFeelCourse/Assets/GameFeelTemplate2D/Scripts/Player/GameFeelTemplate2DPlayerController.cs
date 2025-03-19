using UnityEngine;
using System;

public class GameFeelTemplate2DPlayerController : MonoBehaviour
{
    public static Action OnJump;

    public static GameFeelTemplate2DPlayerController Instance;

    [SerializeField] Transform feetTransform;
    [SerializeField] Vector2 groundCheck;
    [SerializeField] LayerMask groundLayer;
    [SerializeField] float jumpStrength = 7f;
    [SerializeField] float extraGravity = 700f;
    [SerializeField] float gravityDelay = 0.2f;

    float timeInAir;
    bool canDoubleJump;

    GameFeelTemplate2DPlayerInput playerInput;
    FrameInput frameInput;
    Rigidbody2D rb2d;
    GameFeelTemplate2DMovement movement;


    public void Awake() 
    {
        if (Instance == null) 
        { 
            Instance = this; 
        }

        rb2d = GetComponent<Rigidbody2D>();
        playerInput = GetComponent<GameFeelTemplate2DPlayerInput>();
        movement = GetComponent<GameFeelTemplate2DMovement>();
    }


    void OnEnable()
    {
        OnJump += ApplyJumpForce;
    }


    void OnDisable()
    {
        OnJump -= ApplyJumpForce;
    }


    void Update()
    {
        GatherInput();
        Movement();
        HandleJump();
        HandleSpriteFlip();
        GravityDelay();
    }


    void FixedUpdate()
    {
        ExtraGravity();
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


    public void GravityDelay()
    {
        if( !CheckGrounded() )
        {
            timeInAir += Time.deltaTime;
        }
        else
        {
            timeInAir = 0f;
        }
    }


    void ExtraGravity()
    {
        if( timeInAir > gravityDelay )
        {
            rb2d.AddForce( new Vector2( 0f, -extraGravity * Time.deltaTime ) );
        }
    }


    void GatherInput()
    {
        frameInput = playerInput.FrameInput;
    }


    void Movement() 
    {
        movement.SetCurrentDirection( frameInput.Move.x );
    }


    void HandleJump()//TODO: Explore making jump it's own component
    {
        if ( !frameInput.Jump )
        {
            return;
        }

        if ( canDoubleJump )
        {
            canDoubleJump = false;
            OnJump?.Invoke();
        }
        else if ( CheckGrounded() )
        {
            canDoubleJump = true;
            OnJump?.Invoke();
        }
    }


    void ApplyJumpForce()
    {
        rb2d.linearVelocity = Vector2.zero;
        timeInAir = 0f;
        rb2d.AddForce(Vector2.up * jumpStrength, ForceMode2D.Impulse);
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