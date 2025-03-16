using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGEssentialsLoader : MonoBehaviour
{
    [SerializeField] GameObject player;
    
    GameObject cameraContainer;


    void Start()
    {
        if(RPGPlayerController.Instance == null) 
        {
            RPGPlayerController clone = Instantiate(player).GetComponent<RPGPlayerController>();

            // Can place in any scene to set the spawn point of our hero in that scene
            if (FindFirstObjectByType<RPGFountainRespawn>()) 
            {
                clone.transform.position = FindFirstObjectByType<RPGFountainRespawn>().respawnPoint.transform.position;
            } 
            else 
            {
                clone.transform.position = FindFirstObjectByType<RPGAreaEntrance>().transform.position;
            }
        }

        if(RPGCameraController.Instance == null) 
        {
            Instantiate(cameraContainer).GetComponent<RPGCameraController>();
        }
    }
}