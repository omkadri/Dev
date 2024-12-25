using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DEnemySpawnerGDTV : MonoBehaviour
{
    [SerializeField] LaserDefender2DWaveConfigSOGDTV currentWave;
    void Start()
    {
        SpawnEnemies();
    }

    public LaserDefender2DWaveConfigSOGDTV GetCurrentWave()
    {
        return currentWave;
    }

    void SpawnEnemies()
    {
        for ( int i = 0; i < currentWave.GetEnemyCount(); i++ )
        {
            Instantiate( currentWave.GetEnemyPrefab( i ), currentWave.GetStartingWaypoint().position, Quaternion.identity, transform );
            //the 4th parameter of Instantiate() is the parent that we want to nest the instances inside of.        
        }
    }
}
