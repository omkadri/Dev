using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

public class GDTVTopDownAction2DPlayerController : MonoBehaviour
{
    public static GDTVTopDownAction2DPlayerController Instance;
    [SerializeField] float moveSpeed = 1f;
    [SerializeField] float dashSpeed = 4f;
    [SerializeField] float dashTime = 0.2f;
    [SerializeField] TrailRenderer dashTrailRenderer;
    [SerializeField] float dashCooldown = 0.25f;

    private GDTVTopDownAction2DInputActions playerInputActions;
    Vector2 moveDirection;
    Rigidbody2D rb2d;
    Animator animator;
    SpriteRenderer spriteRenderer;

    [HideInInspector]
    public bool isFacingLeft = false;
    float startingMoveSpeed;
    bool isDashing = false;


    void Awake()
    {
        Instance = this;
        playerInputActions = new GDTVTopDownAction2DInputActions(); //TODO: add TopDownActionRPG2DInputActions as a component instead
        rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }


    void Start()
    {
        playerInputActions.Combat.Dash.performed += _ => Dash();
        startingMoveSpeed = moveSpeed;
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
        moveDirection = playerInputActions.Movement.Move.ReadValue<Vector2>();

        animator.SetFloat( "moveX", moveDirection.x );
        animator.SetFloat( "moveY", moveDirection.y );
    }


    void Move()
    {
        rb2d.MovePosition( rb2d.position + moveDirection * ( moveSpeed * Time.fixedDeltaTime ) );//we use fixedDeltaTime because we are in FixedUpdate()
    }


    void AdjustPlayerFacingDirection()
    {
        Vector3 mousePos = Input.mousePosition;
        Vector3 playerScreenPoint = Camera.main.WorldToScreenPoint( transform.position );

        if ( mousePos.x < playerScreenPoint.x )
        {
            spriteRenderer.flipX = true;
            isFacingLeft = true;
        }
        else
        {
            spriteRenderer.flipX = false;
            isFacingLeft = false;
        }
    }


    //TODO: Investigate making dash its own class
    void Dash()
    {
        if ( !isDashing )
        {
            isDashing = true;
            moveSpeed *= dashSpeed;
            dashTrailRenderer.emitting = true;
            StartCoroutine( EndDashRoutine() );
        }
    }

    IEnumerator EndDashRoutine()
    {
        yield return new WaitForSeconds( dashTime );
        moveSpeed = startingMoveSpeed;
        dashTrailRenderer.emitting = false;
        yield return new WaitForSeconds( dashCooldown );
        isDashing = false;
    }
}
