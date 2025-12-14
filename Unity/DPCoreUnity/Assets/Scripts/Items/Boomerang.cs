using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boomerang : MonoBehaviour
{
    [SerializeField] float spinSpeed = 100f;
    [SerializeField] float throwDistance = 5f;
    [SerializeField] float throwSpeed = 40f;
    [SerializeField] int boomerangDamage = 1;
    [SerializeField] float thrust = 15f;
    [SerializeField] bool goForward = false;
    PlayerController player;
    Vector2 locationToThrow;

    void Awake() 
    {
        player = FindFirstObjectByType<PlayerController>();
    }


    void Start() 
    {
        FindPositionToThrow();
    }


    void Update()
    {
        transform.Rotate(new Vector3(0f, 0f, spinSpeed) * Time.deltaTime);

        DetectDestination();
        MoveBoomerang();
    }


    // Finds a Vector2 position away from the player's current facing direction + throwDistance of the Boomerang
    void FindPositionToThrow() 
    {
        Animator playerAnimator = player.GetComponent<Animator>();

        if (playerAnimator.GetFloat("lastMoveX") == 1) 
        {
            locationToThrow = new Vector2(player.transform.position.x + throwDistance, player.transform.position.y);
        }
        else if (playerAnimator.GetFloat("lastMoveX") == -1) 
        {
            locationToThrow = new Vector2(player.transform.position.x - throwDistance, player.transform.position.y);
        }
        else if (playerAnimator.GetFloat("lastMoveY") == 1) 
        {
            locationToThrow = new Vector2(player.transform.position.x, player.transform.position.y + throwDistance);
        }
        else if (playerAnimator.GetFloat("lastMoveY") == -1) 
        {
            locationToThrow = new Vector2(player.transform.position.x, player.transform.position.y - throwDistance);
        }

        goForward = true;
    }
    

    // Once the Boomerang gets closes to the target locationToThrow position, the boomerang will turn around and head back towards the hero
    void DetectDestination() 
    {
        if (goForward && Vector2.Distance(locationToThrow, transform.position) < .5f) {
            goForward = false;
        }
    }


    void MoveBoomerang() 
    {
        if (goForward) 
        {
            transform.position = Vector2.MoveTowards(transform.position, locationToThrow, throwSpeed * Time.deltaTime);
        }
        else if (!goForward) 
        {
            transform.position = Vector2.MoveTowards(transform.position, new Vector2(player.transform.position.x, player.transform.position.y), throwSpeed * Time.deltaTime);
        }
        
        if (!goForward && Vector2.Distance(player.transform.position, transform.position) < 1f) {
            player.itemInUse = false;
            Destroy(this.gameObject);
        }
    }
    

    // If the boomerang hits a collider before getting to it's targeted direction 
    void OnCollisionEnter2D(Collision2D other) 
    {
        goForward = false;
        EnemyHealth enemy = other.gameObject.GetComponent<EnemyHealth>();

        if (enemy) 
        {
            enemy.TakeDamage(boomerangDamage);
            other.gameObject.GetComponent<Knockback>().getKnockedBack(transform, thrust);
        }
    }
}