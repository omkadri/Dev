using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

public class GDTVTopDown2DPlayerController : GDTVSingleton<GDTVTopDown2DPlayerController>
{
    [SerializeField] float moveSpeed = 1f;
    [SerializeField] float dashSpeed = 4f;
    [SerializeField] float dashTime = 0.2f;
    [SerializeField] TrailRenderer dashTrailRenderer;
    [SerializeField] float dashCooldown = 0.25f;

    private GDTVTopDown2DInputActions playerInputActions;
    Vector2 moveDir;
    Rigidbody2D rb2d;
    Animator animator;
    SpriteRenderer spriteRenderer;

    [HideInInspector]
    public bool isFacingLeft = false;
    float startingMoveSpeed;
    bool isDashing = false;


    protected override void Awake()
    {
        base.Awake();
        
        playerInputActions = new GDTVTopDown2DInputActions(); //TODO: add GDTVTopDown2DInputActions as a component instead
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
        AdjustPlayerFacingDir();
        Move();
    }


    void PlayerInput()
    {
        moveDir = playerInputActions.Movement.Move.ReadValue<Vector2>();

        animator.SetFloat( "moveX", moveDir.x );
        animator.SetFloat( "moveY", moveDir.y );
    }


    void Move()
    {
        rb2d.MovePosition( rb2d.position + moveDir * ( moveSpeed * Time.fixedDeltaTime ) );//we use fixedDeltaTime because we are in FixedUpdate()
    }


    void AdjustPlayerFacingDir()
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
