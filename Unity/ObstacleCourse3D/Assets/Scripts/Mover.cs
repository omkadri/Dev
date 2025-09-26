using UnityEngine;

public class Mover : MonoBehaviour
{
    [SerializeField] float _speed = 10f;

    void Start()
    {
    }

    void Update()
    {
        float _xValue = Input.GetAxis("Horizontal") * Time.deltaTime * _speed;
        float _yValue = 0f;
        float _zValue = Input.GetAxis("Vertical") * Time.deltaTime * _speed;
        transform.Translate(_xValue, _yValue, _zValue);
    }
}