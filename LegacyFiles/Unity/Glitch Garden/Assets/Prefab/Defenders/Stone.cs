using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stone : MonoBehaviour
{
	private Animator _animator;
	// Use this for initialization
	void Start()
	{
		_animator = GetComponent<Animator>();
	}

	private void OnTriggerStay2D( Collider2D collision )
	{
		Attacker attacker = collision.gameObject.GetComponent<Attacker>();
		if ( attacker != null )
		{
			_animator.SetTrigger( "UnderAttack" );
		}
	}
}
