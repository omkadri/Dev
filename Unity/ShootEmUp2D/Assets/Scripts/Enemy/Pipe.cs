using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pipe : MonoBehaviour
{
    [SerializeField] Enemy _enemyPrefab;
    [SerializeField] float _spawnTimer = 3f;

    ColorChanger _colorChanger;


    void Awake()
    {
        _colorChanger = GetComponent<ColorChanger>();
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
            Enemy enemy = Instantiate(_enemyPrefab, transform.position, transform.rotation);
            enemy.Init(_colorChanger.DefaultColor);
            yield return new WaitForSeconds(_spawnTimer);
        }
    }
}