using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class LaserDefender2DPlayerController : MonoBehaviour
{
    [SerializeField] float _moveSpeed = 10f;
    [SerializeField] float _paddingLeft = 0.5f;
    [SerializeField] float _paddingRight = 0.5f;
    [SerializeField] float _paddingTop = 5f;
    [SerializeField] float _paddingBottom = 2.5f;

    Vector2 _rawInput;
    Vector2 _minBounds;
    Vector2 _maxBounds;

    LaserDefender2DShooter _shooter;


    void Awake()
    {
        _shooter = GetComponent<LaserDefender2DShooter>();
    }


    void Start()
    {
        InitBounds();
    }


    void Update()
    {
        Move();
    }


    void InitBounds()
    {
        Camera mainCamera = Camera.main;
        _minBounds = mainCamera.ViewportToWorldPoint( new Vector2( 0, 0 ) );
        _maxBounds = mainCamera.ViewportToWorldPoint( new Vector2( 1, 1 ) );
    }


    void Move()
    {
        Vector2 delta = _rawInput * _moveSpeed * Time.deltaTime;
        Vector2 newPos = new Vector2();
        newPos.x = Mathf.Clamp( transform.position.x + delta.x, _minBounds.x + _paddingLeft, _maxBounds.x - _paddingRight );
        newPos.y = Mathf.Clamp( transform.position.y + delta.y, _minBounds.y + _paddingBottom, _maxBounds.y - _paddingTop );
        transform.position = newPos;
    }


    void OnMove( InputValue value )
    {
        _rawInput = value.Get<Vector2>();
    }
    

    void OnFire( InputValue value )
    {
        if ( _shooter != null )
        {
            _shooter._isFiring = value.isPressed;
        }
    }
}