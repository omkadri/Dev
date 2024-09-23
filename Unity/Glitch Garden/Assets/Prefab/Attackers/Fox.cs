using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent( typeof( Attacker ) )]
public class Fox : MonoBehaviour
{
  Attacker _attacker;
  Animator _animator;
  // Use this for initialization
  void Start()
  {
    _attacker = gameObject.GetComponent<Attacker>();
    _animator = gameObject.GetComponent<Animator>();
  }


  private void OnTriggerEnter2D( Collider2D collision )
  {
    GameObject obj = collision.gameObject;
    if ( obj.GetComponentInParent<Defender>() == null )
    {
      return;
    }
    if ( obj.GetComponentInParent<Stone>() != null )
    {
      _animator.SetTrigger( "Jumping" );
    }
    else
    {
      _animator.SetBool( "isAttacking", true );
      _attacker.Attack( obj );
    }
  }

}
