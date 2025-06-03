using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

public class SideScroller2DPlayer : MonoBehaviour
{
    [SerializeField] float _runSpeed = 5f;
    [SerializeField] bool _invertHorizontalMovement = false;
    [SerializeField] float _jumpSpeed = 10f;
    [SerializeField] float _climbSpeed = 5f;
    [SerializeField] Vector2 _deathKnockback = new Vector2( -2f, 20f );
    [SerializeField] GameObject _projectile;
    [SerializeField] Transform _projectileWeapon;

    bool _isAlive;
    Vector2 _moveInput;
    Rigidbody2D _rb2d;
    Animator _animator;
    CapsuleCollider2D _bodyCollider;
    BoxCollider2D _feetCollider;
    float _defaultPlayerGravity;

    static readonly int _isRunningHash = Animator.StringToHash( "IsRunning" );
    static readonly int _isClimbingHash = Animator.StringToHash( "IsClimbing" );


    void Start()
    {
        _isAlive = true;
        _rb2d = GetComponent<Rigidbody2D>();
        _animator = GetComponent<Animator>();
        _bodyCollider = GetComponent<CapsuleCollider2D>();
        _feetCollider = GetComponent<BoxCollider2D>();
        _defaultPlayerGravity = _rb2d.gravityScale;
    }


    void Update()
    {
        if ( !_isAlive ) { return; }
        Run();
        FlipSprite();
        Climb();
        Die();
    }


    void OnMove( InputValue value )
{
    if ( !_isAlive ) return;

    Vector2 input = value.Get<Vector2>();
    input.x *= _invertHorizontalMovement ? -1 : 1;

    _moveInput = input;
}


    void OnJump( InputValue value )
    {
        if ( !_isAlive ) { return; }
        if ( !_feetCollider.IsTouchingLayers( LayerMask.GetMask( "Ground" ) ) )
        {
            return;
        }
        if ( value.isPressed )
        {
            _rb2d.linearVelocity += new Vector2( 0f, _jumpSpeed );
        }
        if (value.isPressed)
        {
            _rb2d.linearVelocity += new Vector2( 0f, _jumpSpeed );
        }
    }


    void OnFire( InputValue value )
    {
        if ( !_isAlive ) { return; }
        Instantiate( _projectile, _projectileWeapon.position, transform.rotation );
    }


    void Run()
    {
        Vector2 playerVelocity = new Vector2( _moveInput.x * _runSpeed, _rb2d.linearVelocity.y );
        _rb2d.linearVelocity = playerVelocity;
        bool playerHasHorizontalSpeed = Mathf.Abs( _rb2d.linearVelocity.x ) > Mathf.Epsilon;//this prevents sprite from fliping back to facing forward after it stops moving
        _animator.SetBool( _isRunningHash, playerHasHorizontalSpeed );
    }


    private void FlipSprite()
    {
        bool playerHasHorizontalSpeed = Mathf.Abs( _rb2d.linearVelocity.x ) > Mathf.Epsilon;//this prevents sprite from fliping back to facing forward after it stops moving

        if ( playerHasHorizontalSpeed )
        {
            transform.localScale = new Vector2( Mathf.Sign(_rb2d.linearVelocity.x ), 1f);
        }
    }


    void Climb()
    {
        if ( !_bodyCollider.IsTouchingLayers( LayerMask.GetMask( "Climbing" ) ) )
        {
            _rb2d.gravityScale = _defaultPlayerGravity;
            _animator.SetBool( _isClimbingHash, false );
            return;
        }
        Vector2 climbVelocity = new Vector2( _rb2d.linearVelocity.x, _moveInput.y * _climbSpeed );
        _rb2d.linearVelocity = climbVelocity;
        _rb2d.gravityScale = 0f;
        bool playerHasVerticalSpeed = Mathf.Abs( _rb2d.linearVelocity.y ) > Mathf.Epsilon;
        _animator.SetBool( _isClimbingHash, playerHasVerticalSpeed );
    }


    void Die()
    {
        if ( _bodyCollider.IsTouchingLayers( LayerMask.GetMask( "Enemies", "Hazards" ) ) )
        {
            _isAlive = false;
            _animator.SetTrigger( "Dying" );
            _rb2d.linearVelocity = _deathKnockback;
            FindFirstObjectByType<SideScroller2DGameSession>().ProcessPlayerDeath();
        }
    }
}