using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Game Object/2D/LaserDefender2D/Wave Config", fileName = "New Wave Config")]
public class LaserDefender2DWaveConfigSO : ScriptableObject
{
    [SerializeField] List<GameObject> _enemyPrefabs;
    [SerializeField] Transform _pathPrefab;
    [SerializeField] float _moveSpeed = 5f;
    [SerializeField] float _timeBetweenEnemySpawns = 1f;
    [SerializeField] float _spawnTimeVariance = 0f;
    [SerializeField] float _minSpawnTime = 0.2f;


    public int GetEnemyCount()
    {
        return _enemyPrefabs.Count;
    }


    public GameObject GetEnemyPrefab( int index )
    {
        return _enemyPrefabs[index];
    }


    public Transform GetStartingWaypoint()
    {
        return _pathPrefab.GetChild( 0 );
    }


    public List<Transform> GetWaypoints()
    {
        List<Transform> waypoints = new List<Transform>();
        foreach( Transform child in _pathPrefab )
        {
            waypoints.Add( child );
        }
        return waypoints;
    }


    public float GetMoveSpeed()
    {
        return _moveSpeed;
    }


    public float GetRandomSpawnTime()
    {
        float spawnTime = Random.Range( ( _timeBetweenEnemySpawns - _spawnTimeVariance ), ( _timeBetweenEnemySpawns + _spawnTimeVariance ) );
        return Mathf.Clamp( spawnTime, _minSpawnTime, float.MaxValue );//we only want to clamp the min, so max is set to float.MaxValue
    }
}