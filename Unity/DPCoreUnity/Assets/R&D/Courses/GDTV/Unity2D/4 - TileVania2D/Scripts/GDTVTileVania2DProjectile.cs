using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class GDTVTileVania2DProjectile : MonoBehaviour
{
    Rigidbody2D rb2d;
    [SerializeField] float projectileSpeed = 20f;
    GDTVTileVania2DPlayer player;
    float xSpeed;


    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        player = FindFirstObjectByType<GDTVTileVania2DPlayer>();
        xSpeed = player.transform.localScale.x * projectileSpeed;
    }


    void Update()
    {
        rb2d.linearVelocity = new Vector2( xSpeed, 0f );
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.tag == "Enemy" )
        {
            Destroy( other.gameObject );
        }  
        Destroy( gameObject );
    }


    void OnCollisionEnter2D( Collision2D other )
    {
        Destroy( gameObject );
    }

}
