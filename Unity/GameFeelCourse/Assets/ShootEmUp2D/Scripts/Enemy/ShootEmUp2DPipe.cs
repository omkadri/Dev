using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DPipe : MonoBehaviour
{
    [SerializeField] ShootEmUp2DEnemy enemyPrefab;
    [SerializeField] float spawnTimer = 3f;

    ShootEmUp2DColorChanger colorChanger;


    void Awake()
    {
        colorChanger = GetComponent<ShootEmUp2DColorChanger>();
    }


    void Start() 
    {
        StartCoroutine(SpawnRoutine());
    }


    IEnumerator SpawnRoutine() 
    {
        while (true)
        {
            colorChanger.SetRandomColor();
            ShootEmUp2DEnemy enemy = Instantiate(enemyPrefab, transform.position, transform.rotation);
            enemy.Init( colorChanger.DefaultColor );
            yield return new WaitForSeconds(spawnTimer);
        }
    }
}