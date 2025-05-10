using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DAttackerSpawner : MonoBehaviour
{
    [SerializeField] float _minSpawnDelay = 1f;
    [SerializeField] float _maxSpawnDelay = 1f;
    [SerializeField] GlitchGarden2DAttacker _attackerPrefab;

    bool _spawn = true;


    IEnumerator Start()
    {
        while( _spawn ) // while spawn = true
        {
            yield return new WaitForSeconds( UnityEngine.Random.Range( _minSpawnDelay, _maxSpawnDelay ) );
            SpawnAttacker();
        }
    }


    private void SpawnAttacker()
    {
        GlitchGarden2DAttacker newAttacker = Instantiate( _attackerPrefab, transform.position, transform.rotation );
        newAttacker.transform.parent = transform;//ensures that the attacker is spawned as a child of the object this script is attached to
    }


    void Update()
    {
        
    }
}
