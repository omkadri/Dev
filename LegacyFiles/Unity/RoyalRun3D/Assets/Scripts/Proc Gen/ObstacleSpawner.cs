using System.Collections;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour
{
    [SerializeField] GameObject[] _obstaclePrefabs;
    [SerializeField] float _obstacleSpawnTime = 1f;
    [SerializeField] float _minObstacleSpawnTime = .2f;
    [SerializeField] Transform _obstacleParent;
    [SerializeField] float _spawnWidth = 4f;

    void Start()
    {
        StartCoroutine(SpawnObstacleRoutine());
    }

    public void DecreaseObstacleSpawnTime(float amount)
    {
        _obstacleSpawnTime -= amount;

        if (_obstacleSpawnTime <= _minObstacleSpawnTime) 
        {
            _obstacleSpawnTime = _minObstacleSpawnTime;
        }
    }

    IEnumerator SpawnObstacleRoutine() 
    {
        while (true)
        {
            GameObject obstaclePrefab = _obstaclePrefabs[Random.Range(0, _obstaclePrefabs.Length)];
            Vector3 spawnPosition = new Vector3(Random.Range(-_spawnWidth, _spawnWidth), transform.position.y, transform.position.z);
            yield return new WaitForSeconds(_obstacleSpawnTime);
            Instantiate(obstaclePrefab, spawnPosition, Random.rotation, _obstacleParent);
        }
    }
}
