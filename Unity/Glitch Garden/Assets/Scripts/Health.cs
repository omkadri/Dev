using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour
{
  public float ItemHealth;

  public void TakeDamage( float damage )
  {
    ItemHealth -= damage;
    if ( ItemHealth <= 0.0f )
    {
      DestroyObject();
    }
  }

  private void DestroyObject()
  {
    Destroy( gameObject );
  }
}