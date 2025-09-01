using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootEmUp2DPipe : MonoBehaviour
{
    [SerializeField] ShootEmUp2DEnemy _enemyPrefab;
    [SerializeField] float _spawnTimer = 3f;

    ShootEmUp2DColorChanger _colorChanger;


    void Awake()
    {
        _colorChanger = GetComponent<ShootEmUp2DColorChanger>();
    }


    void Start() 
    {
        StartCoroutine(SpawnRoutine());
    }


    IEnumerator SpawnRoutine() 
    {
        while (true)
        {
            _colorChanger.SetRandomColor();
            ShootEmUp2DEnemy enemy = Instantiate(_enemyPrefab, transform.position, transform.rotation);
            enemy.Init(_colorChanger.DefaultColor);
            yield return new WaitForSeconds(_spawnTimer);
        }
    }
}