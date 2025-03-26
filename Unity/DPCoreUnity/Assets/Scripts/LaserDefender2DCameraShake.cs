using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserDefender2DCameraShake : MonoBehaviour
{
    [SerializeField] float _shakeDuration = 0.5f;
    [SerializeField] float _shakeMagnitude = 0.25f;

    Vector3 initialPos;


    void Start()
    {
        initialPos = transform.position;
    }


    public void Play()
    {
        StartCoroutine( ShakeRoutine() );
    }


    IEnumerator ShakeRoutine()
    {
        float elapsedTime = 0;
        while( elapsedTime < _shakeDuration )
        {
            transform.position = initialPos + ( Vector3 )Random.insideUnitCircle * _shakeMagnitude; //insideUnitCircle is a position inside of a 1 by 1 circle
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        transform.position = initialPos;
    }
}