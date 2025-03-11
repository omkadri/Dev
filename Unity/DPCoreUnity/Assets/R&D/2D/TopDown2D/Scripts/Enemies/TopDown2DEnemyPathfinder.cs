using UnityEngine;
using UnityEngine.EventSystems;

public class TopDown2DEnemyPathfinder : MonoBehaviour
{
    [SerializeField] float moveSpeed = 2f;
    
    Rigidbody2D rb2d;
    Vector2 moveDir;
    TopDown2DKnockback knockback;
    SpriteRenderer spriteRenderer;


    void Awake()
    {
        knockback = GetComponent<TopDown2DKnockback>();
        rb2d = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }


    void FixedUpdate()
    {
        if ( knockback.gettingKnockedBack )
        {
            return;
        }
        rb2d.MovePosition( rb2d.position + moveDir * ( moveSpeed * Time.fixedDeltaTime ) );
        
        if ( moveDir.x < 0 )
        {
            spriteRenderer.flipX = true;
        }
        else if ( moveDir.x > 0 )
        {
            spriteRenderer.flipX = false;
        }
    }
    

    public void MoveTo( Vector2 targetPos )
    {
        moveDir = targetPos;
    }


    public void StopMoving()
    {
        moveDir = Vector3.zero;
    }
}