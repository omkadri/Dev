using System;
using UnityEngine;

public class SingletonExampleA : MonoBehaviour
{
    void Awake()
    {
        ManageSingleton();
    }

    void ManageSingleton()
    {
        int instanceCount = FindObjectsByType(GetType(), FindObjectsSortMode.None).Length;
        if( instanceCount > 1 )
        {
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
        else
        {
            DontDestroyOnLoad( gameObject );
        }
    }
}
