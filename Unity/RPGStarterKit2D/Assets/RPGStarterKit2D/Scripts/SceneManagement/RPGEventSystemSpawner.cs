using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

// This class exists to remove multiple Event Systems spawning in each scene as only one can exist in a given Scene
public class RPGEventSystemSpawner : MonoBehaviour 
{
    [SerializeField] GameObject eventSystemprefab;
    [SerializeField] GameObject firstSelectedInvObject;


    void Start()
    {
        EventSystem sceneEventSystem = FindFirstObjectByType<EventSystem>();
        if (sceneEventSystem == null)
        {
            GameObject newEventSystem = Instantiate(eventSystemprefab);
            newEventSystem.transform.parent = transform;
            newEventSystem.GetComponent<EventSystem>().SetSelectedGameObject(firstSelectedInvObject);
            FindFirstObjectByType<RPGInventoryManager>().SetEventSystem(newEventSystem.GetComponent<EventSystem>());
        }
    }
}