using UnityEngine;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.UI;

public class StockGraphMinigame : MonoBehaviour
{
    public LineRenderer line;

    

    [Header("Client Trust")]
    public Slider _clientTrustSlider; // assign in inspector
    public StockGraphAI _aiScript;    // assign AI GameObject with StockGraphAI
    public float _stockComparisonThreshold = 30f;
    public float _clientTrustDeclineSpeed = 0.1f;
    public float _clientTrustRegainSpeed = 0.05f;

    [Header("Stock Value Settings")]
    public float _stockValue = 30f;
    public float _maxStockValue = 300f;
    public float _acceleration = 0f;
    public float _accelChangeRate = 50f; // how fast arrows change accel

    [Header("Graph Scaling")]
    public float _timeScale = 1f;    // X scaling
    public float _speedScale = 0.02f; // Y scaling

    [Header("UI")]
    public TMP_Text averageStockText; // assign in inspector

    private float _time;
    private List<Vector3> _points = new List<Vector3>();

    // New variable to track average stock value
    private float _averageStockValue = 0f;
    private float _totalStockValue = 0f;
    private int _sampleCount = 0;

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

        // update time
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

        // update average stock value
        _sampleCount++;
        _totalStockValue += _stockValue;
        _averageStockValue = _totalStockValue / _sampleCount;

        // update TMP text
        if (averageStockText != null)
            averageStockText.text = $"Avg Stock: {_averageStockValue:F2}";
        
        if (_aiScript != null && _clientTrustSlider != null)
        {
            float difference = Mathf.Abs(_averageStockValue - _aiScript.GetAverageStockValue());

            if (difference >= _stockComparisonThreshold)
            {
                // Player is far from AI → decrease trust
                _clientTrustSlider.value -= Time.deltaTime * _clientTrustDeclineSpeed; // adjust speed if needed
            }
            else
            {
                // Player is close → increase trust
                _clientTrustSlider.value += Time.deltaTime * _clientTrustRegainSpeed; // slower recovery
            }

            // Keep slider between 0 and 1
            _clientTrustSlider.value = Mathf.Clamp01(_clientTrustSlider.value);
        }
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
