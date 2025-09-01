using UnityEngine;
using System;
using System.Collections;

public class ShootEmUp2DPlayerController : MonoBehaviour
{
    public Vector2 MoveInput => _frameInput.Move;
    
    public static Action OnJump;
    public static Action OnJetpack;

    public static ShootEmUp2DPlayerController Instance;

    [SerializeField] TrailRenderer _jetpackTrailRenderer;
    [SerializeField] Transform _feetTransform;
    [SerializeField] Vector2 _groundCheck;
    [SerializeField] LayerMask _groundLayer;
    [SerializeField] float _jumpStrength = 7f;
    [SerializeField] float _extraGravity = 700f;
    [SerializeField] float _gravityDelay = 0.2f;
    [SerializeField] float _coyoteTime = 0.1f; //window of time for player to jump after walking of ledge
    [SerializeField] float _jetpackTime = 0.6f;
    [SerializeField] float _jetpackStrength = 11f;
    [SerializeField] float _maxFallSpeedVelocity = -25f;//TODO: Better name??

    float _timeInAir;
    float _coyoteTimer;
    bool _canDoubleJump;//TODO: Investigate adding slight cooldown so that spamming double jump doesn't look weird
    Coroutine _jetpackCoroutine;

    ShootEmUp2DPlayerInput _playerInput;
    FrameInput _frameInput;
    Rigidbody2D _rb2d;
    ShootEmUp2DMovement _movement;


    public void Awake() 
    {
        if (Instance == null) 
        { 
            Instance = this; 
        }

        _rb2d = GetComponent<Rigidbody2D>();
        _playerInput = GetComponent<ShootEmUp2DPlayerInput>();
        _movement = GetComponent<ShootEmUp2DMovement>();
    }


    void OnEnable()
    {
        OnJump += ApplyJumpForce;
        OnJetpack += StartJetpack;
    }


    void OnDisable()
    {
        OnJump -= ApplyJumpForce;
        OnJetpack -= StartJetpack;
    }


    void Update()
    {
        GatherInput();
        Movement();
        CoyoteTimer();
        HandleJump();
        HandleSpriteFlip();
        GravityDelay();
        Jetpack();
    }


    void FixedUpdate()
    {
        ExtraGravity();
    }


    void OnDestroy()
    {
        ShootEmUp2DScreenFade fade = FindFirstObjectByType<ShootEmUp2DScreenFade>();
        fade?.FadeInAndOut();
    }


    public bool IsFacingRight()
    {
        return transform.eulerAngles.y == 0;
    }


    public bool CheckGrounded()
    {
        Collider2D isGrounded = Physics2D.OverlapBox(_feetTransform.position, _groundCheck, 0f, _groundLayer);//This draws a collider box on the ground layer at the player feet positions
        return isGrounded;
    }


    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(_feetTransform.position, _groundCheck);//DEBUG DRAW
    }


    public void GravityDelay()
    {
        if(!CheckGrounded())
        {
            _timeInAir += Time.deltaTime;
        }
        else
        {
            _timeInAir = 0f;
        }
    }


    void ExtraGravity()
    {
        if(_timeInAir > _gravityDelay)
        {
            _rb2d.AddForce(new Vector2(0f, -_extraGravity * Time.deltaTime));
            if(_rb2d.linearVelocity.y < _maxFallSpeedVelocity)
            {
                _rb2d.linearVelocity = new Vector2(_rb2d.linearVelocity.x, _maxFallSpeedVelocity);
            }
        }
    }


    void GatherInput()
    {
        _frameInput = _playerInput.FrameInput;
    }


    void Movement() 
    {
        _movement.SetCurrentDirection(_frameInput.Move.x);
    }


    void HandleJump()//TODO: Explore making jump it's own component
    {
        if (!_frameInput.Jump)
        {
            return;
        }

        if (CheckGrounded())
        {
            OnJump?.Invoke();
        }
        else if (_coyoteTimer > 0f)
        {
            OnJump?.Invoke();
        }
        else if (_canDoubleJump)
        {
            _canDoubleJump = false;
            OnJump?.Invoke();
        }
    }


    private void CoyoteTimer()
    {
        if (CheckGrounded())
        {
            _coyoteTimer = _coyoteTime;
            _canDoubleJump = true;
        }
        else
        {
            _coyoteTimer -= Time.deltaTime;
        }
    }


    void ApplyJumpForce()
    {
        _rb2d.linearVelocity = Vector2.zero;
        _timeInAir = 0f;
        _coyoteTimer = 0f;
        _rb2d.AddForce(Vector2.up * _jumpStrength, ForceMode2D.Impulse);
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


    void Jetpack()
    {
        if (!_frameInput.Jetpack || _jetpackCoroutine != null)
        {
            return;
        }

        OnJetpack?.Invoke();
    }


    void StartJetpack()
    {
        _jetpackTrailRenderer.emitting = true;
        _jetpackCoroutine = StartCoroutine(JetpackRoutine());
    }


    IEnumerator JetpackRoutine()
    {
        float jetpackElapsedTime = 0f;

        while(jetpackElapsedTime < _jetpackTime)
        {
            jetpackElapsedTime += Time.deltaTime;
            _rb2d.linearVelocity = Vector2.up * _jetpackStrength;
            yield return null;
        }

        _jetpackTrailRenderer.emitting = false;
        _jetpackCoroutine = null;
    }
}