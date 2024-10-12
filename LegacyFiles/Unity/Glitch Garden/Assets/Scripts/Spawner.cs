using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
  public GameObject[] Attackers;
  public float TimeBeforeStart;

  private GameObject[] _lanes = new GameObject[ 5 ];

  private float[] _nextSpawn;

  // Use this for initialization
  void Start()
  {
    for ( int i = 0; i < 5; i++ )
    {
      _lanes[ i ] = GameObject.Find( "Lane " + ( i + 1 ) );
    }
    if ( Attackers.Length > 0 )
    {
      _nextSpawn = new float[ Attackers.Length ];
      for ( int i = 0; i < _nextSpawn.Length; i++ )
      {
        _nextSpawn[ i ] = Time.time + ( i * 1.0f ) + TimeBeforeStart;
      }
    }
  }

  // Update is called once per frame
  void Update()
  {
    for ( int i = 0; i < Attackers.Length; i++ )
    {
      if ( IsTimeToSpawn( i ) )
      {
        Spawn( Attackers[ i ] );

        Attacker attacker = Attackers[ i ].GetComponentInChildren<Attacker>( true );
        float average = attacker.SpawnTime;
        _nextSpawn[ i ] = Time.time + average + Random.Range( -( average / 4.0f ), ( average / 4.0f ) );
        break;
      }
    }
  }

  private bool IsTimeToSpawn( int prefabNo )
  {
    return _nextSpawn[ prefabNo ] < Time.time;
  }

  void Spawn( GameObject myObject )
  {
    int num = Mathf.RoundToInt( Random.Range( 0.5f, _lanes.Length + 0.5f ) );
    GameObject attacker = Instantiate( myObject, _lanes[ num - 1 ].transform.position, Quaternion.identity );
    attacker.transform.parent = _lanes[ num - 1 ].transform;
  }
}
