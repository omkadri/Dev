using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleDestroy : MonoBehaviour
{
    [SerializeField] float waitTime = 3f;


    void Start()
    {
        Destroy(gameObject, waitTime);
    }
}