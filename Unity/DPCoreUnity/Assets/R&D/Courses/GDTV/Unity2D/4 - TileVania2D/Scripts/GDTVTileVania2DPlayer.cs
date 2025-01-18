using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

public class GDTVTileVania2DPlayer : MonoBehaviour
{
    [SerializeField] float runSpeed = 10f;
    [SerializeField] float jumpSpeed = 5f;
    [SerializeField] float climbSpeed = 5f;
    [SerializeField] Vector2 deathKnockback = new Vector2( 20f, 20f );
    [SerializeField] GameObject projectile;
    [SerializeField] Transform projectileWeapon;
    bool isAlive;
    Vector2 moveInput;
    Rigidbody2D rb2d;
    Animator animator;
    CapsuleCollider2D bodyCollider;
    BoxCollider2D feetCollider;
    float defaultPlayerGravity;


    void Start()
    {
        isAlive = true;
        rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        bodyCollider = GetComponent<CapsuleCollider2D>();
        feetCollider = GetComponent<BoxCollider2D>();
        defaultPlayerGravity = rb2d.gravityScale;
    }


    void Update()
    {
        if ( !isAlive ) { return; }
        Run();
        FlipSprite();
        Climb();
        Die();
    }


    void OnMove( InputValue value )
    {
        if ( !isAlive ) { return; }
        moveInput = value.Get<Vector2>();
        Debug.Log( moveInput );
    }


    void OnJump( InputValue value )
    {
        if ( !isAlive ) { return; }
        if ( !feetCollider.IsTouchingLayers( LayerMask.GetMask( "Ground" ) ) )
        {
            return;
        }
        if( value.isPressed )
        {
            rb2d.linearVelocity += new Vector2( 0f, jumpSpeed );
        }
        if( value.isPressed )
        {
            rb2d.linearVelocity += new Vector2( 0f, jumpSpeed );
        }
    }


    void OnFire( InputValue value )
    {
        if ( !isAlive ) { return; }
        Instantiate( projectile, projectileWeapon.position, transform.rotation );
    }


    void Run()
    {
        Vector2 playerVelocity = new Vector2( moveInput.x * runSpeed, rb2d.linearVelocity.y );
        rb2d.linearVelocity = playerVelocity;
        bool playerHasHorizontalSpeed = Mathf.Abs( rb2d.linearVelocity.x ) > Mathf.Epsilon;//this prevents sprite from fliping back to facing forward after it stops moving
        animator.SetBool( "IsRunning", playerHasHorizontalSpeed );
    }


    private void FlipSprite()
    {
        bool playerHasHorizontalSpeed = Mathf.Abs(rb2d.linearVelocity.x) > Mathf.Epsilon;//this prevents sprite from fliping back to facing forward after it stops moving

        if ( playerHasHorizontalSpeed )
        {
            transform.localScale = new Vector2(Mathf.Sign( rb2d.linearVelocity.x ), 1f);
        }
    }


    void Climb()
    {
        if ( !bodyCollider.IsTouchingLayers( LayerMask.GetMask( "Climbing" ) ) )
        {
            rb2d.gravityScale = defaultPlayerGravity;
            animator.SetBool( "IsClimbing", false );
            return;
        }
        Vector2 climbVelocity = new Vector2( rb2d.linearVelocity.x, moveInput.y * climbSpeed );
        rb2d.linearVelocity = climbVelocity;
        rb2d.gravityScale = 0f;
        bool playerHasVerticalSpeed = Mathf.Abs( rb2d.linearVelocity.y ) > Mathf.Epsilon;
        animator.SetBool( "IsClimbing", playerHasVerticalSpeed );
    }
    

    void Die()
    {
        if ( bodyCollider.IsTouchingLayers( LayerMask.GetMask( "Enemies", "Hazards" ) ) )
        {
            isAlive = false;
            animator.SetTrigger( "Dying" );
            rb2d.linearVelocity = deathKnockback;
            FindFirstObjectByType<GDTVTileVania2DGameSession>().ProcessPlayerDeath();
        }
    }
}
