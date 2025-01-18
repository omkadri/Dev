using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DEnemySpawner : MonoBehaviour
{
    [SerializeField] List<LaserDefender2DWaveConfigSO> waveConfigs;
    [SerializeField] float timeBetweenWaves = 0f;
    [SerializeField] bool isLooping;
    LaserDefender2DWaveConfigSO currentWave;
    

    void Start()
    {
        StartCoroutine ( SpawnEnemyWavesRoutine() );
    }


    public LaserDefender2DWaveConfigSO GetCurrentWave()
    {
        return currentWave;
    }


    IEnumerator SpawnEnemyWavesRoutine()
    {
        do
        {
            foreach( LaserDefender2DWaveConfigSO wave in waveConfigs )
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
