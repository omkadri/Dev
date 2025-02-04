using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVLaserDefender2DCameraShake : MonoBehaviour
{
    [SerializeField] float shakeDuration = 1f;
    [SerializeField] float shakeMagnitude = 0.5f;

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
        float elapsedTime = 0f;
        while( elapsedTime < shakeDuration )
        {
            transform.position = initialPos + ( Vector3 )Random.insideUnitCircle * shakeMagnitude; //insideUnitCircle is a position inside of a 1 by 1 circle
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        transform.position = initialPos;
    }
}