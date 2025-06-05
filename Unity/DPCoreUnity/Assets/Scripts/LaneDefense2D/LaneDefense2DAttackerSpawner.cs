using System.Collections;
using UnityEngine;

public class LaneDefense2DAttackerSpawner : MonoBehaviour
{
    [SerializeField] float _minSpawnDelay = 1f;
    [SerializeField] float _maxSpawnDelay = 1f;
    [SerializeField] LaneDefense2DAttacker[] _attackerPrefabs;

    bool _spawn = true;


    IEnumerator Start()
    {
        while( _spawn )
        {
            yield return new WaitForSeconds( UnityEngine.Random.Range( _minSpawnDelay, _maxSpawnDelay ) );
            SpawnAttacker();
        }
    }


    void SpawnAttacker()
    {
        int attackerIndex = Random.Range( 0, _attackerPrefabs.Length );

        LaneDefense2DAttacker newAttacker = Instantiate( _attackerPrefabs[attackerIndex], transform.position, transform.rotation );
        newAttacker.transform.parent = transform;//ensures that the attacker is spawned as a child of the object this script is attached to
    }
}