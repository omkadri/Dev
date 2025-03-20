using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DPipe : MonoBehaviour
{
    [SerializeField] ShootEmUp2DEnemy enemyPrefab;
    [SerializeField] float spawnTimer = 3f;


    void Start() 
    {
        StartCoroutine(SpawnRoutine());
    }


    IEnumerator SpawnRoutine() 
    {
        while (true)
        {
            ShootEmUp2DEnemy enemy = Instantiate(enemyPrefab, transform.position, transform.rotation);
            yield return new WaitForSeconds(spawnTimer);
        }
    }
}