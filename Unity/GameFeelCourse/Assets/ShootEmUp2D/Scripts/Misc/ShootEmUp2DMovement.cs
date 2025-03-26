using UnityEngine;

public class ShootEmUp2DMovement : MonoBehaviour
{
    [SerializeField] float _moveSpeed = 10f;

    float _moveX;//TODO: Rename to something better
    bool _canMove = true;

    Rigidbody2D _rb2d;
    ShootEmUp2DKnockback _knockback;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _knockback = GetComponent<ShootEmUp2DKnockback>();
    }


    void OnEnable()
    {
        _knockback.OnKnockbackStart += CanMoveFalse;
        _knockback.OnKnockbackEnd += CanMoveTrue;
    }


    void OnDisable()
    {
        _knockback.OnKnockbackStart -= CanMoveFalse;
        _knockback.OnKnockbackEnd -= CanMoveTrue;
    }


    void FixedUpdate()
    {
        Move();
    }


    public void SetCurrentDirection( float currentDir)
    {
        _moveX = currentDir;
    }


    void CanMoveTrue()
    {
        _canMove = true;
    }


    void CanMoveFalse()
    {
        _canMove = false;
    }


    void Move()
    {
        if( !_canMove )
        { 
            return;
        }

        Vector2 movement = new Vector2( _moveX * _moveSpeed, _rb2d.linearVelocity.y );//TODO: Rename movement to something better
        _rb2d.linearVelocity = movement;
    }
}