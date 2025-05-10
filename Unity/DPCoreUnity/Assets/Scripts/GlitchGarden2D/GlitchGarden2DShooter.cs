using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DShooter : MonoBehaviour
{
    [SerializeField] GameObject _projectile;
    [SerializeField] GameObject _gun;
    GlitchGarden2DAttackerSpawner _currentLaneAttackerSpawner;


    void Start()
    {
        SetCurrentLaneAttackerSpawner();
    }


    void Update()
    {
        if( IsAttackerInLane() )
        {
            Debug.Log("Shoot");
        }
        else
        {
            Debug.Log("Wait");
        }
    }


    void SetCurrentLaneAttackerSpawner()
    {
        GlitchGarden2DAttackerSpawner[] spawners = FindObjectsByType<GlitchGarden2DAttackerSpawner>( FindObjectsSortMode.None );

        foreach ( GlitchGarden2DAttackerSpawner spawner in spawners )
        {
            bool isCloseEnough = Mathf.Abs(spawner.transform.position.y - transform.position.y) < 0.1f; //using 0.1 because Mathf.Epsilon returns an error
            if ( isCloseEnough )
            {
                _currentLaneAttackerSpawner = spawner;
            }
        }
    }

    bool IsAttackerInLane()
    {
        if ( _currentLaneAttackerSpawner.transform.childCount <= 0 )
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public void Fire()
    {
        Instantiate( _projectile, _gun.transform.position, transform.rotation ); //notice how we are instantiating at the gun's transform position
    }
}