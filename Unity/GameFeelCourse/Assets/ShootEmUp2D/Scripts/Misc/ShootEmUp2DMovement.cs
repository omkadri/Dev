using UnityEngine;

public class ShootEmUp2DMovement : MonoBehaviour
{
    [SerializeField] float moveSpeed = 10f;

    float moveX;//TODO: Rename to something better
    bool canMove = true;

    Rigidbody2D rb2d;
    ShootEmUp2DKnockback knockback;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        knockback = GetComponent<ShootEmUp2DKnockback>();
    }


    void OnEnable()
    {
        knockback.OnKnockbackStart += CanMoveFalse;
        knockback.OnKnockbackEnd += CanMoveTrue;
    }


    void OnDisable()
    {
        knockback.OnKnockbackStart -= CanMoveFalse;
        knockback.OnKnockbackEnd -= CanMoveTrue;
    }


    void FixedUpdate()
    {
        Move();
    }


    public void SetCurrentDirection( float currentDir)
    {
        moveX = currentDir;
    }


    void CanMoveTrue()
    {
        canMove = true;
    }


    void CanMoveFalse()
    {
        canMove = false;
    }


    void Move()
    {
        if( !canMove )
        { 
            return;
        }

        Vector2 movement = new Vector2( moveX * moveSpeed, rb2d.linearVelocity.y );//TODO: Rename movement to something better
        rb2d.linearVelocity = movement;
    }
}