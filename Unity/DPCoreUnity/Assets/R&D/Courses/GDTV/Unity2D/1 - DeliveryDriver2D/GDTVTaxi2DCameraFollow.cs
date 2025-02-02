using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVTaxi2DCameraFollow : MonoBehaviour
{
    public enum FollowMode
    {
        None,
        Driver2D
    }

    [SerializeField] private FollowMode followMode = FollowMode.None;
    [SerializeField] private GameObject followTarget;
    
    [SerializeField] private float followSpeed = 2f;
    private const int ZBuffer = -10;


    void LateUpdate()
    {
        if ( followMode == FollowMode.Driver2D && followTarget != null )
        {
            Vector3 followTargetPos = followTarget.transform.position + new Vector3( 0, 0, ZBuffer );
            Vector3 targetPos = followTargetPos;
            transform.position = Vector3.Lerp( transform.position, targetPos, followSpeed * Time.deltaTime );
        }
    }
}