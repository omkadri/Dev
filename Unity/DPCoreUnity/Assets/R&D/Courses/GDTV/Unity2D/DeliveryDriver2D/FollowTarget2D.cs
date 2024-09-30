using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTarget2D : MonoBehaviour
{
    [SerializeField] GameObject FollowTarget;

    int ZBuffer = -10;
    void LateUpdate()
    {
        transform.position = FollowTarget.transform.position + new Vector3(0, 0, ZBuffer);
    }
}
