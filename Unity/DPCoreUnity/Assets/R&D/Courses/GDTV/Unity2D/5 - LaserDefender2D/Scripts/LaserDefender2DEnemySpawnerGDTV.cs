using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DEnemySpawnerGDTV : MonoBehaviour
{
    [SerializeField] List<LaserDefender2DWaveConfigSOGDTV> waveConfigs;
    [SerializeField] float timeBetweenWaves = 0f;
    [SerializeField] bool isLooping;
    LaserDefender2DWaveConfigSOGDTV currentWave;
    
    void Start()
    {
        StartCoroutine ( SpawnEnemyWaves() );
    }

    public LaserDefender2DWaveConfigSOGDTV GetCurrentWave()
    {
        return currentWave;
    }

    IEnumerator SpawnEnemyWaves()
    {
        do
        {
            foreach( LaserDefender2DWaveConfigSOGDTV wave in waveConfigs )
            {
                currentWave = wave;
                for ( int i = 0; i < currentWave.GetEnemyCount(); i++ )
                {
                    Instantiate( currentWave.GetEnemyPrefab( i ), currentWave.GetStartingWaypoint().position, Quaternion.identity, transform );
                    //the 4th parameter of Instantiate() is the parent that we want to nest the instances inside of.

                    yield return new WaitForSeconds( currentWave.GetRandomSpawnTime() );
                }
                yield return new WaitForSeconds( timeBetweenWaves );
            }
        }
        while( isLooping );
    }
}
