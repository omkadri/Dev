using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DAttackerSpawner : MonoBehaviour
{
    [SerializeField] float minSpawnDelay = 1f;
    [SerializeField] float maxSpawnDelay = 1f;
    [SerializeField] GlitchGarden2DAttacker attackerPrefab;

    bool spawn = true;


    IEnumerator Start()
    {
        while( spawn ) // while spawn = true
        {
            yield return new WaitForSeconds( UnityEngine.Random.Range( minSpawnDelay, maxSpawnDelay ) );
            SpawnAttacker();
        }
    }

    private void SpawnAttacker()
    {
        Instantiate( attackerPrefab, transform.position, transform.rotation );
    }

    void Update()
    {
        
    }
}
