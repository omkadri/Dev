using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVLaserDefender2DEnemySpawner : MonoBehaviour
{
    [SerializeField] List<GDTVLaserDefender2DWaveConfigSO> waveConfigs;
    [SerializeField] float timeBetweenWaves = 0f;
    [SerializeField] bool isLooping;
    GDTVLaserDefender2DWaveConfigSO currentWave;
    

    void Start()
    {
        StartCoroutine ( SpawnEnemyWavesRoutine() );
    }


    public GDTVLaserDefender2DWaveConfigSO GetCurrentWave()
    {
        return currentWave;
    }


    IEnumerator SpawnEnemyWavesRoutine()
    {
        do
        {
            foreach( GDTVLaserDefender2DWaveConfigSO wave in waveConfigs )
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
