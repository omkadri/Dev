using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class RPGCameraController : Singleton<RPGCameraController>
{
    Transform player;
    Tilemap theMap;
    Vector3 bottomLeftLimit;
    Vector3 topRightLimit;
    float halfHeight;
    float halfWidth;
    const string groundString = "Ground";


    void Start() 
    {
        if (FindFirstObjectByType<RPGPlayerController>()) 
        {
            player = RPGPlayerController.Instance.transform;
        }
        theMap = GameObject.Find(groundString).GetComponent<Tilemap>();

        halfHeight = Camera.main.orthographicSize;
        halfWidth = halfHeight * Camera.main.aspect;

        bottomLeftLimit = theMap.localBounds.min + new Vector3(halfWidth, halfHeight, 0f);
        topRightLimit = theMap.localBounds.max + new Vector3(-halfWidth, -halfHeight, 0f);
    }


    void Update() 
    {
        FindPlayer();
    }


    void LateUpdate()
    {
        transform.position = new Vector3(player.position.x, player.position.y, transform.position.z);

        transform.position = new Vector3(
            Mathf.Clamp(transform.position.x, bottomLeftLimit.x, topRightLimit.x), 
            Mathf.Clamp(transform.position.y, bottomLeftLimit.y, topRightLimit.y), 
            transform.position.z);
    }


    void FindPlayer() 
    {
        if (player == null) 
        {
            player = RPGPlayerController.Instance.transform;
        }

        if (theMap == null) 
        {
            theMap = GameObject.Find(groundString).GetComponent<Tilemap>();

            bottomLeftLimit = theMap.localBounds.min + new Vector3(halfWidth, halfHeight, 0f);
            topRightLimit = theMap.localBounds.max + new Vector3(-halfWidth, -halfHeight, 0f);
        }
    }
}