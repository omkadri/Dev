using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVLaserDefender2DPathfinder : MonoBehaviour
{
    GDTVLaserDefender2DEnemySpawner enemySpawner;
    GDTVLaserDefender2DWaveConfigSO waveConfig;
    List<Transform> waypoints;
    int waypointIndex = 0;


    void Awake()
    {
        enemySpawner = FindFirstObjectByType<GDTVLaserDefender2DEnemySpawner>();
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
        if ( waypointIndex < waypoints.Count )
        {
            Vector3 targetPos = waypoints[waypointIndex].position;
            float delta = waveConfig.GetMoveSpeed() * Time.deltaTime;
            transform.position = Vector2.MoveTowards( transform.position, targetPos, delta );
            if ( transform.position == targetPos )
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
