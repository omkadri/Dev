using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileVania2DScenePersistGDTV : MonoBehaviour
{
    void Awake()
    {
        int numScenePersists = FindObjectsByType<TileVania2DScenePersistGDTV>( FindObjectsSortMode.None ).Length;
        if ( numScenePersists > 1 ) // ensures that only one scenePersist can exist at a time
        {
            Destroy( gameObject );
        }
        else
        {
            DontDestroyOnLoad( gameObject ); //ensures that scenePersist is being carried over into the next scene
        }
    }

    public void ResetScenePersist()
    {
        Destroy( gameObject ); // we don't want one scenePersist object going into another scene
    }
}