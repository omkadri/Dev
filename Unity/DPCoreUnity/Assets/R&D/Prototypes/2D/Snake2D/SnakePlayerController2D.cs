using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snake2D : MonoBehaviour
{
    public float moveSpeed = 20f;
    private float moveTimer;
    private float moveInterval;
    public Vector2 direction = Vector2.right;


    void Start()
    {
        moveInterval = 1f / moveSpeed;
    }


    void Update()
    {
        // Handle input for direction changes
        if ( Input.GetKeyDown( KeyCode.UpArrow ) && direction != Vector2.down ) direction = Vector2.up;
        if ( Input.GetKeyDown( KeyCode.DownArrow ) && direction != Vector2.up ) direction = Vector2.down;
        if ( Input.GetKeyDown( KeyCode.LeftArrow ) && direction != Vector2.right ) direction = Vector2.left;
        if ( Input.GetKeyDown( KeyCode.RightArrow ) && direction != Vector2.left ) direction = Vector2.right;
    }


    void FixedUpdate()
    {
        moveTimer += Time.fixedDeltaTime;
        if ( moveTimer >= moveInterval )
        {
            Move();
            moveTimer = 0;
        }
    }


    void Move()
    {
        // Calculate new position for the head
        Vector2 newPosition = ( Vector2 )transform.position + direction; // Use Vector2
        transform.position = newPosition;

        // Rotate the snake head
        if ( direction == Vector2.up ) transform.rotation = Quaternion.Euler( 0, 0, 90 );
        else if ( direction == Vector2.down ) transform.rotation = Quaternion.Euler( 0, 0, 270 );
        else if ( direction == Vector2.left ) transform.rotation = Quaternion.Euler( 0, 0, 180 );
        else if ( direction == Vector2.right ) transform.rotation = Quaternion.Euler( 0, 0, 0 );
    }
}