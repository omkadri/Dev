using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour
{

  public GameObject Projectile;
  public GameObject ShootFrom;

  private GameObject _projectileParent;

  private Animator _animator;
  private GameObject _myLaneSpawner = null;

  // Use this for initialization
  void Start()
  {
    GetProjectileParent();
    _animator = FindObjectOfType<Animator>();
    FindLane();
  }

  private void FindLane()
  {
    GameObject obj;
    for ( int i = 1; ; i++ )
    {
      obj = GameObject.Find( "Lane " + i );
      if ( obj == null )
      {
        break;
      }
      if ( obj.transform.position.y == transform.position.y )
      {
        _myLaneSpawner = obj;
        break;
      }
    }
  }

  private void GetProjectileParent()
  {
    _projectileParent = GameObject.Find( "Projectiles" );
    if ( _projectileParent == null )
    {
      _projectileParent = new GameObject( "Projectiles" );
    }
  }

  // Update is called once per frame
  void Update()
  {
    SetIsAttacking( DetectedAttacker() );
  }

  private void SetIsAttacking( bool attacking )
  {
    if ( _animator.GetBool( "isAttacking" ) != attacking )
    {
      _animator.SetBool( "isAttacking", attacking );
    }
  }

  private bool DetectedAttacker()
  {
    foreach ( Transform attacker in _myLaneSpawner.transform )
    {
      if ( transform.position.x < attacker.position.x && attacker.position.x < 10.0f )
      {
        return true;
      }
    }

    return false;
  }

  public void Fire()
  {
    GameObject bullet = Instantiate( Projectile ) as GameObject;
    bullet.transform.parent = _projectileParent.transform;
    bullet.transform.position = ShootFrom.transform.position;
  }
}
