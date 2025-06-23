using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Scripting.APIUpdating;

public class TopDown2DPlayerController : Singleton<TopDown2DPlayerController>
{
    [SerializeField] float moveSpeed = 1f;
    [SerializeField] float dashSpeed = 4f;
    [SerializeField] float dashTime = 0.2f;
    [SerializeField] float dashCooldown = 0.25f;
    [SerializeField] TrailRenderer dashTrailRenderer;
    [SerializeField] Transform weaponCollider;
    [SerializeField] Transform slashAnimationSpawnPoint;

    private TopDown2DInputActions inputActions;
    Vector2 moveDir;
    Rigidbody2D rb2d;
    Animator animator;
    SpriteRenderer spriteRenderer;
    TopDown2DKnockback knockback;

    [HideInInspector]
    public bool isFacingLeft = false;//TODO: Create public getter
    float startingMoveSpeed;
    bool isDashing = false;


    protected override void Awake()
    {
        base.Awake();
        
        inputActions = new TopDown2DInputActions(); //TODO: add TopDown2DInputActions as a component instead
        rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        knockback = GetComponent<TopDown2DKnockback>();
    }


    void Start()
    {
        inputActions.Combat.Dash.performed += _ => Dash();
        startingMoveSpeed = moveSpeed;

        TopDown2DActiveInventory.Instance.EquipStartingWeapon();
    }


    void OnEnable()
    {
        inputActions.Enable();
    }
    

    void OnDisable()
    {
        inputActions?.Disable();//This is important for preventing memory leaks. any script that enables inputAction via callback must also disable them via callback
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


    public Transform GetWeaponCollider()
    {
        return weaponCollider;
    }


    public Transform GetSlashAnimSpawnPoint()
    {
        return weaponCollider;
    }


    void PlayerInput()
    {
        moveDir = inputActions.Movement.Move.ReadValue<Vector2>();

        animator.SetFloat("moveX", moveDir.x);
        animator.SetFloat("moveY", moveDir.y);
    }


    void Move()
    {
        if (knockback.gettingKnockedBack || TopDown2DPlayerHealth.Instance.IsDead)
        {
            return;
        }
        
        rb2d.MovePosition(rb2d.position + moveDir * (moveSpeed * Time.fixedDeltaTime));//we use fixedDeltaTime because we are in FixedUpdate()
    }


    void AdjustPlayerFacingDir()
    {
        Vector3 mousePos = Input.mousePosition;
        Vector3 playerScreenPoint = Camera.main.WorldToScreenPoint(transform.position);

        if (mousePos.x < playerScreenPoint.x)
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
        if (!isDashing && TopDown2DPlayerStamina.Instance.CurrentStamina > 0)
        {
            TopDown2DPlayerStamina.Instance.UseStamina();
            isDashing = true;
            moveSpeed *= dashSpeed;
            dashTrailRenderer.emitting = true;
            StartCoroutine(EndDashRoutine());
        }
    }

    IEnumerator EndDashRoutine()
    {
        yield return new WaitForSeconds(dashTime);
        moveSpeed = startingMoveSpeed;
        dashTrailRenderer.emitting = false;
        yield return new WaitForSeconds(dashCooldown);
        isDashing = false;
    }
}