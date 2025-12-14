using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EssentialsLoader : MonoBehaviour
{
    [SerializeField] GameObject player;
    
    GameObject cameraContainer;


    void Start()
    {
        if(PlayerController.Instance == null) 
        {
            PlayerController clone = Instantiate(player).GetComponent<PlayerController>();

            // Can place in any scene to set the spawn point of our hero in that scene
            if (FindFirstObjectByType<FountainRespawn>()) 
            {
                clone.transform.position = FindFirstObjectByType<FountainRespawn>().respawnPoint.transform.position;
            } 
            else 
            {
                clone.transform.position = FindFirstObjectByType<AreaEntrance>().transform.position;
            }
        }

        if(CameraController.Instance == null) 
        {
            Instantiate(cameraContainer).GetComponent<CameraController>();
        }
    }
}