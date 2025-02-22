using UnityEngine;
using UnityEngine.EventSystems;

public class GDTVTopDown2DEnemyPathfinder : MonoBehaviour
{
    [SerializeField] float moveSpeed = 2f;
    
    Rigidbody2D rb2d;
    Vector2 moveDir;
    GDTVTopDown2DKnockback knockback;
    SpriteRenderer spriteRenderer;


    void Awake()
    {
        knockback = GetComponent<GDTVTopDown2DKnockback>();
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