using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{

  public float Speed;
  public float Damage;
  // Use this for initialization
  void Start()
  {
  }

  // Update is called once per frame
  void Update()
  {
    transform.Translate( Vector3.right * Speed * Time.deltaTime );
  }

  private void OnTriggerEnter2D( Collider2D collision )
  {
    GameObject target = collision.gameObject;
    if ( target == null || target.GetComponentInChildren<Attacker>() == null )
    {
      return;
    }
    Health health = target.GetComponentInChildren<Health>();
    if ( health != null )
    {
      health.TakeDamage( Damage );
      Destroy( gameObject );
    }
  }
}
