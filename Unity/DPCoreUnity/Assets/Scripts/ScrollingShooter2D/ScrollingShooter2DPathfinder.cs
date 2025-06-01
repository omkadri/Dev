using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollingShooter2DPathfinder : MonoBehaviour
{
    ScrollingShooter2DEnemySpawner _enemySpawner;
    ScrollingShooter2DWaveConfigSO _waveConfig;
    List<Transform> waypoints;
    int _waypointIndex = 0;


    void Awake()
    {
        _enemySpawner = FindFirstObjectByType<ScrollingShooter2DEnemySpawner>();
    }


    void Start()
    {
        _waveConfig = _enemySpawner.GetCurrentWave();
        waypoints = _waveConfig.GetWaypoints();
        transform.position = waypoints[_waypointIndex].position;
    }


    void Update()
    {
        FollowPath();   
    }


    void FollowPath()
    {
        if ( _waypointIndex < waypoints.Count )
        {
            Vector3 targetPos = waypoints[_waypointIndex].position;
            float delta = _waveConfig.GetMoveSpeed() * Time.deltaTime;
            transform.position = Vector2.MoveTowards( transform.position, targetPos, delta );
            if ( transform.position == targetPos )
            {
                _waypointIndex++;
            }
        }
        else
        {
            Destroy( gameObject );
        }
    }
}