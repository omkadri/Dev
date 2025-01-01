using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DPathfinderGDTV : MonoBehaviour
{
    LaserDefender2DEnemySpawnerGDTV enemySpawner;
    LaserDefender2DWaveConfigSOGDTV waveConfig;
    List<Transform> waypoints;
    int waypointIndex = 0;

    void Awake()
    {
        enemySpawner = FindFirstObjectByType<LaserDefender2DEnemySpawnerGDTV>();
    }

    void Start()
    {
        waveConfig = enemySpawner.GetCurrentWave();
        waypoints = waveConfig.GetWaypoints();
        transform.position = waypoints[waypointIndex].position;
    }

    void Update()
    {
        FollowPath();   
    }

    void FollowPath()
    {
        if( waypointIndex < waypoints.Count )
        {
            Vector3 targetPosition = waypoints[waypointIndex].position;
            float delta = waveConfig.GetMoveSpeed() * Time.deltaTime;
            transform.position = Vector2.MoveTowards( transform.position, targetPosition, delta );
            if(transform.position == targetPosition)
            {
                waypointIndex++;
            }
        }
        else
        {
            Destroy( gameObject );
        }
    }
}
