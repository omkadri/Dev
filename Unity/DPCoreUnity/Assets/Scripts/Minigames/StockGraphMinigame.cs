using UnityEngine;
using System.Collections.Generic;
using UnityEngine.InputSystem;

public class StockGraphMinigame : MonoBehaviour
{
    public LineRenderer line;

    [Header("Stock Value Settings")]
    public float _stockValue = 30f;
    public float _maxStockValue = 300f;
    public float _acceleration = 0f;
    public float _accelChangeRate = 50f; // how fast arrows change accel

    [Header("Graph Scaling")]
    public float _timeScale = 1f;    // X scaling
    public float _speedScale = 0.02f; // Y scaling

    float _time;
    List<Vector3> _points = new List<Vector3>();

    void Start()
    {
        line.positionCount = 0;
    }

    void Update()
    {
        HandleInput();

        // integrate speed
        _stockValue += _acceleration * Time.deltaTime;

        // clamp speed and reset acceleration if at max or min
        if (_stockValue >= _maxStockValue)
        {
            _stockValue = _maxStockValue;
            _acceleration = 0f;
        }
        else if (_stockValue <= 0f)
        {
            _stockValue = 0f;
            _acceleration = 0f;
        }

        _time += Time.deltaTime;

        // add point to graph
        Vector3 point = new Vector3(
            _time * _timeScale,
            _stockValue * _speedScale,
            0f
        );

        _points.Add(point);
        line.positionCount = _points.Count;
        line.SetPositions(_points.ToArray());
    }

    void HandleInput()
    {
        var keyboard = Keyboard.current;
        if (keyboard == null) return;

        // set acceleration directly instead of incrementing
        if (keyboard.upArrowKey.isPressed)
            _acceleration = _accelChangeRate;
        else if (keyboard.downArrowKey.isPressed)
            _acceleration = -_accelChangeRate;
        else
            _acceleration = 0f; // no input → no acceleration
    }
}