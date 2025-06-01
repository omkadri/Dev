using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollingShooter2DEnemySpawner : MonoBehaviour
{
    [SerializeField] List<ScrollingShooter2DWaveConfigSO> _waveConfigs;
    [SerializeField] float _timeBetweenWaves = 2f;
    [SerializeField] bool _isLooping;
    ScrollingShooter2DWaveConfigSO _currentWave;
    

    void Start()
    {
        StartCoroutine ( SpawnEnemyWavesRoutine() );
    }


    public ScrollingShooter2DWaveConfigSO GetCurrentWave()
    {
        return _currentWave;
    }


    IEnumerator SpawnEnemyWavesRoutine()
    {
        do
        {
            foreach( ScrollingShooter2DWaveConfigSO wave in _waveConfigs )
            {
                _currentWave = wave;
                for ( int i = 0; i < _currentWave.GetEnemyCount(); i++ )
                {
                    Instantiate( _currentWave.GetEnemyPrefab( i ), _currentWave.GetStartingWaypoint().position, Quaternion.identity, transform );
                    //the 4th parameter of Instantiate() is the parent that we want to nest the instances inside of.

                    yield return new WaitForSeconds( _currentWave.GetRandomSpawnTime() );
                }
                yield return new WaitForSeconds( _timeBetweenWaves );
            }
        }
        while( _isLooping );
    }
}