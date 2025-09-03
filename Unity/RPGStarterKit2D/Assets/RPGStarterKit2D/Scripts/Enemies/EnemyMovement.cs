using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    public bool canMove = true;
    public float enemyKnockBackThrust = 15f;
    public int damageDoneToHero;

    [SerializeField] Rigidbody2D rb2d;
    [SerializeField] float moveSpeed;
    [SerializeField] SpriteRenderer spriteRenderer;
    // Used in PlayerHealth collision with Enemies
    int xDir;
    int yDir;
    float randomNum;
    Vector2 movement;


    void Start() 
    {
        StartCoroutine(ChangeDirectionRoutine());
    }


    void Update() 
    {
        Move();
    }


    void Move() 
    {
        if (!canMove) 
        { 
            return; 
        }

        rb2d.MovePosition(rb2d.position + movement * moveSpeed * Time.fixedDeltaTime);

        // can flip sprite to reduce amount of sprites & animations
        if (movement.x == -1) 
        {
            spriteRenderer.flipX = true;
        }
        else 
        {
            spriteRenderer.flipX = false;
        }
    }
    

    // random movement around map
    IEnumerator ChangeDirectionRoutine() 
    {
        while (true) 
        {
            randomNum = Random.Range(-5, 5);
            movement.x = Random.Range(-1, 2);
            movement.y = Random.Range(-1, 2);
            yield return new WaitForSeconds(randomNum);
        }
    }
}