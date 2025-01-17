using UnityEngine;
using UnityEngine.EventSystems;

public class GDTVTopDownAction2DEnemyPathfinder : MonoBehaviour
{
    [SerializeField] float moveSpeed = 2f;
    
    Rigidbody2D rb2d;
    Vector2 moveDirection;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        rb2d.MovePosition( rb2d.position + moveDirection * ( moveSpeed * Time.fixedDeltaTime ) );
    }

    public void MoveTo( Vector2 targetPosition )
    {
        moveDirection = targetPosition;
    }
}
