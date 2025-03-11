using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snake2D : MonoBehaviour
{
    public float moveSpeed = 20f;
    private float moveTimer;
    private float moveInterval;
    public Vector2 dir = Vector2.right;


    void Start()
    {
        moveInterval = 1f / moveSpeed;
    }


    void Update()
    {
        if ( Input.GetKeyDown( KeyCode.UpArrow ) && dir != Vector2.down ) dir = Vector2.up;
        if ( Input.GetKeyDown( KeyCode.DownArrow ) && dir != Vector2.up ) dir = Vector2.down;
        if ( Input.GetKeyDown( KeyCode.LeftArrow ) && dir != Vector2.right ) dir = Vector2.left;
        if ( Input.GetKeyDown( KeyCode.RightArrow ) && dir != Vector2.left ) dir = Vector2.right;
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
        Vector2 newPos = ( Vector2 )transform.position + dir; // Use Vector2
        transform.position = newPos;

        if ( dir == Vector2.up ) transform.rotation = Quaternion.Euler( 0, 0, 90 );
        else if ( dir == Vector2.down ) transform.rotation = Quaternion.Euler( 0, 0, 270 );
        else if ( dir == Vector2.left ) transform.rotation = Quaternion.Euler( 0, 0, 180 );
        else if ( dir == Vector2.right ) transform.rotation = Quaternion.Euler( 0, 0, 0 );
    }
}