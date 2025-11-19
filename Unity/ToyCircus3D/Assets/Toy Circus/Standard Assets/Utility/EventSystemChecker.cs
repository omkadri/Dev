using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class EventSystemChecker : MonoBehaviour
{
    //public GameObject eventSystem;

    // Use this for initialization
    void Awake()
    {
        if (!FindFirstObjectByType<EventSystem>())
        {
            // Instantiate the EventSystem
            GameObject obj = new GameObject("EventSystem");
            obj.AddComponent<EventSystem>();
            obj.AddComponent<StandaloneInputModule>(); // Remove forceModuleActive
        }
    }
}