using UnityEngine;
using System.Collections.Generic;

public class StockGraphAI : MonoBehaviour
{
    public LineRenderer line;

    [Header("Stock Value Settings")]
    public float _stockValue = 30f;
    public float _maxStockValue = 300f;
    public float _acceleration = 0f;
    public float _accelChangeRate = 50f; // how fast acceleration can change

    [Header("Graph Scaling")]
    public float _timeScale = 1f;    // X scaling
    public float _speedScale = 0.02f; // Y scaling

    [Header("AI Settings")]
    public float _aiChangeInterval = 0.5f; // how often AI changes direction
    public float _aiRandomness = 0.5f;     // randomness factor

    private float _time;
    private float _aiTimer = 0f;
    private List<Vector3> _points = new List<Vector3>();

    void Start()
    {
        line.positionCount = 0;
    }

    void Update()
    {
        HandleAI();

        // integrate acceleration to stock value
        _stockValue += _acceleration * Time.deltaTime;

        // clamp stock value and reset acceleration if at boundaries
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

        // add new point to graph
        Vector3 point = new Vector3(
            _time * _timeScale,
            _stockValue * _speedScale,
            0f
        );

        _points.Add(point);
        line.positionCount = _points.Count;
        line.SetPositions(_points.ToArray());
    }

    void HandleAI()
    {
        _aiTimer += Time.deltaTime;
        if (_aiTimer >= _aiChangeInterval)
        {
            _aiTimer = 0f;

            float randomFactor = Random.Range(-1f, 1f);
            _acceleration = randomFactor * _accelChangeRate * _aiRandomness;

            // prevent AI from trying to go beyond bounds
            if (_stockValue >= _maxStockValue)
            {
                _acceleration = -Mathf.Abs(_acceleration); // force downward
            }
            else if (_stockValue <= 0f)
            {
                _acceleration = Mathf.Abs(_acceleration); // force upward
            }
        }
}
}