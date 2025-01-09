using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

public class TopDownActionRPG2DPlayerController : MonoBehaviour
{
    [SerializeField] float moveSpeed = 1f;

    private TopDownActionRPG2DInputActions playerInputActions;
    Vector2 movement;
    Rigidbody2D rb2d;
    Animator animator;
    SpriteRenderer spriteRenderer;

    void Awake()
    {
        playerInputActions = new TopDownActionRPG2DInputActions(); //TODO: add TopDownActionRPG2DInputActions as a component instead
        rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void OnEnable()
    {
        playerInputActions.Enable();
    }

    void Update()
    {
        PlayerInput();
    }

    void FixedUpdate()//we use this for handling physics
    {
        AdjustPlayerFacingDirection();
        Move();
    }

    void PlayerInput()
    {
        movement = playerInputActions.Movement.Move.ReadValue<Vector2>();

        animator.SetFloat( "moveX", movement.x );
        animator.SetFloat( "moveY", movement.y );
    }

    void Move()
    {
        rb2d.MovePosition( rb2d.position + movement * ( moveSpeed * Time.fixedDeltaTime ) );//we use fixedDeltaTime because we are in FixedUpdate()
    }

    void AdjustPlayerFacingDirection()
    {
        Vector3 mousePos = Input.mousePosition;
        Vector3 playerScreenPoint = Camera.main.WorldToScreenPoint( transform.position );

        if ( mousePos.x < playerScreenPoint.x )
        {
            spriteRenderer.flipX = true;
        }
        else
        {
            spriteRenderer.flipX = false;
        }
    }
}
