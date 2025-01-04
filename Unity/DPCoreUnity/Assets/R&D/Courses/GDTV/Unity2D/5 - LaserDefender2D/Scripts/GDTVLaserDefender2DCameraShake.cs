using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GDTVLaserDefender2DCameraShake : MonoBehaviour
{
    [SerializeField] float shakeDuration = 1f;
    [SerializeField] float shakeMagnitude = 0.5f;

    Vector3 initialPosition;

    void Start()
    {
        initialPosition = transform.position;
    }

    public void Play()
    {
        StartCoroutine( Shake() );
    }

    IEnumerator Shake()
    {
        float elapsedTime = 0;
        while( elapsedTime < shakeDuration )
        {
            transform.position = initialPosition + ( Vector3 )Random.insideUnitCircle * shakeMagnitude; //insideUnitCircle is a position inside of a 1 by 1 circle
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        transform.position = initialPosition;
    }
}
