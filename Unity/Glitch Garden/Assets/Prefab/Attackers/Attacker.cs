using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attacker : MonoBehaviour
{
  [Tooltip("Average number of seconds between appearances")]
  public float SpawnTime;

  [Range( -1.0f, 1.5f )]
  private float _currentSpeed;
  private GameObject _currentTarget;
  private Animator _animator;

  // Use this for initialization
  void Start()
  {
    _animator = gameObject.GetComponent<Animator>();
    //Rigidbody2D body = this.gameObject.AddComponent<Rigidbody2D>();
    //body.isKinematic = true;
  }

  public void SetSpeed( float speed )
  {
    _currentSpeed = speed;
  }
  // Update is called once per frame
  void Update()
  {
    transform.Translate( Vector3.left * _currentSpeed * Time.deltaTime );
  }

  private void OnTriggerEnter2D( Collider2D collision )
  {
  }

  public void StrikeCurrentTarget( float damage )
  {
    if ( _currentTarget == null )
    {
      _animator.SetBool( "isAttacking", false );
      return;
    }
    Health health = _currentTarget.GetComponentInParent<Health>();
    if ( health != null )
    {
      health.TakeDamage( damage );
    }
    else
    {
      Debug.LogWarningFormat( "Unable to find health component for {0}", _currentTarget.name );
    }
  }

  internal void Attack( GameObject obj )
  {
    _currentTarget = obj;
  }
}
