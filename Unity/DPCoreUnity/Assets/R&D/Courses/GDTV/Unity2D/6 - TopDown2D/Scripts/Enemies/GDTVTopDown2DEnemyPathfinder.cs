using UnityEngine;
using UnityEngine.EventSystems;

public class GDTVTopDown2DEnemyPathfinder : MonoBehaviour
{
    [SerializeField] float moveSpeed = 2f;
    
    Rigidbody2D rb2d;
    Vector2 moveDirection;
    GDTVTopDown2DKnockback knockback;


    void Awake()
    {
        knockback = GetComponent<GDTVTopDown2DKnockback>();
        rb2d = GetComponent<Rigidbody2D>();
    }


    void FixedUpdate()
    {
        if ( knockback.gettingKnockedBack )
        {
            return;
        }
        rb2d.MovePosition( rb2d.position + moveDirection * ( moveSpeed * Time.fixedDeltaTime ) );
    }
    

    public void MoveTo( Vector2 targetPosition )
    {
        moveDirection = targetPosition;
    }
}
