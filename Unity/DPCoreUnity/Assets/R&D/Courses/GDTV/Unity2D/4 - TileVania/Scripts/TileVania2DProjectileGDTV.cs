using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class TileVania2DProjectileGDTV : MonoBehaviour
{
    Rigidbody2D rb2d;
    [SerializeField] float projectileSpeed = 20f;
    TileVaniaPlayerGDTV player;// xSpeed ensures bullet is shooting in the direction that the player is facing
    float xSpeed;
    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        player = FindObjectOfType<TileVaniaPlayerGDTV>();
        xSpeed = player.transform.localScale.x * projectileSpeed;
    }

    void Update()
    {
        rb2d.velocity = new Vector2( xSpeed, 0f );
    }

    void OnTriggerEnter2D( Collider2D other )
    {
        if(other.tag == "Enemy")
        {
            Destroy(other.gameObject);
        }  
        Destroy(gameObject);
    }

    void OnCollisionEnter2D(Collision2D other)
    {
        Destroy(gameObject);
    }

}
