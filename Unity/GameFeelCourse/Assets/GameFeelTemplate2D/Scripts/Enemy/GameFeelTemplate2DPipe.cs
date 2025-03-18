using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFeelTemplate2DPipe : MonoBehaviour
{
    [SerializeField] GameFeelTemplate2DEnemy enemyPrefab;
    [SerializeField] float spawnTimer = 3f;


    void Start() 
    {
        StartCoroutine(SpawnRoutine());
    }


    IEnumerator SpawnRoutine() 
    {
        while (true)
        {
            GameFeelTemplate2DEnemy enemy = Instantiate(enemyPrefab, transform.position, transform.rotation);
            yield return new WaitForSeconds(spawnTimer);
        }
    }
}