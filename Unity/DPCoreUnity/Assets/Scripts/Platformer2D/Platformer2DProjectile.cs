using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Platformer2DProjectile : MonoBehaviour
{
    [SerializeField] float _projectileSpeed = 20f;

    Rigidbody2D _rb2d;
    Platformer2DPlayer _player;// xSpeed ensures bullet is shooting in the direction that the player is facing. TODO: Find better name
    float _xSpeed;//TODO: find better name


    void Start()
    {
        _rb2d = GetComponent<Rigidbody2D>();
        _player = FindFirstObjectByType<Platformer2DPlayer>();
        _xSpeed = _player.transform.localScale.x * _projectileSpeed;
    }


    void Update()
    {
        _rb2d.linearVelocity = new Vector2( _xSpeed, 0f );
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