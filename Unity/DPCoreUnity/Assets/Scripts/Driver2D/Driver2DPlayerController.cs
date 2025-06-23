using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Driver2DPlayerController : MonoBehaviour
{
    [SerializeField] float _steerSpeed = 900f;
    [SerializeField] float _moveSpeed = 12f;
    [SerializeField] bool _enableBoost = true;
    float defaultSpeed;

    [SerializeField] float _boostSpeed = 20f;


    void Start()
    {
        defaultSpeed = _moveSpeed;
    }


    void Update()
    {
        float steerAmount = Input.GetAxis("Horizontal");
        float moveAmount = Input.GetAxis("Vertical");
        transform.Rotate(0, 0, (-steerAmount * _steerSpeed) * Time.deltaTime);
        transform.Translate(0, (moveAmount * _moveSpeed) * Time.deltaTime, 0);
    }
    

    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag != "Boost")
        {
            _moveSpeed = defaultSpeed;
        }
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (_enableBoost && other.tag == "Boost")
        {
            _moveSpeed = _boostSpeed;
        }
    }
}