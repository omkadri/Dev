using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ObstacleSpawner2D : MonoBehaviour
{
    [SerializeField] GameObject obstaclePrefab;
    public float spawnRate = 2f;
    public float heightOffset = 2f;

    private void Start()
    {
        InvokeRepeating("SpawnObstacle", 0f, spawnRate);
    }

    void SpawnObstacle()
    {
        float randomY = Random.Range(-heightOffset, heightOffset);
        Vector3 spawnPosition = new Vector3(transform.position.x, randomY, 0);
        Instantiate(obstaclePrefab, spawnPosition, Quaternion.identity);
    }
}
