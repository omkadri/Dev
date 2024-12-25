using System.Collections;
using System.Collections.Generic;
using System.IO.Enumeration;
using UnityEngine;

[CreateAssetMenu(menuName = "Game Object/2D/GDTV/LaserDefender2D/Wave Config", fileName = "New Wave Config")]
public class LaserDefender2DWaveConfigSOGDTV : ScriptableObject
{
    [SerializeField] Transform pathPrefab;
    [SerializeField] float moveSpeed = 5f;

    public Transform GetStartingWaypoint()
    {
        return pathPrefab.GetChild( 0 );
    }

    public List<Transform> GetWaypoints()
    {
        List<Transform> waypoints = new List<Transform>();
        foreach( Transform child in pathPrefab )
        {
            waypoints.Add( child );
        }
        return waypoints;
    }

    public float GetMoveSpeed()
    {
        return moveSpeed;
    }
}
