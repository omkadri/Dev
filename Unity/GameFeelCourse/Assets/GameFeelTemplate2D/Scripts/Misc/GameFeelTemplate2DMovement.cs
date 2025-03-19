using UnityEngine;

public class GameFeelTemplate2DMovement : MonoBehaviour
{
    [SerializeField] float moveSpeed = 10f;

    float moveX;//TODO: Rename to something better

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void FixedUpdate()
    {
        Move();
    }


    public void SetCurrentDirection( float currentDir)
    {
        moveX = currentDir;
    }


    void Move()
    {
        Vector2 movement = new Vector2( moveX * moveSpeed, rb2d.linearVelocity.y );//TODO: Rename movement to something better
        rb2d.linearVelocity = movement;
    }
}
