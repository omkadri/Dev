using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.UI;

public class Driver : MonoBehaviour
{
    [SerializeField] float _currentSpeed = 5f;
    [SerializeField] float _steerSpeed = 200f;
    [SerializeField] float _boostSpeed = 10f;
    [SerializeField] float _regularSpeed = 5f;
    [SerializeField] int _maxHealth = 10;
    [SerializeField] int _collisionDamageAmount = 1;

    [SerializeField] TMP_Text _boostText;
    [SerializeField] TMP_Text _healthText;
    [SerializeField] Slider _healthSlider;

    int _currentHealth;

    void Start()
    {
        _boostText.gameObject.SetActive(false);
        _currentHealth = _maxHealth;
        _healthSlider.maxValue = _maxHealth;
        _healthSlider.minValue = 0;
        _healthText.SetText(Mathf.RoundToInt((_currentHealth / (float)_maxHealth) * 100f) + "%");
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Boost"))
        {
            _currentSpeed = _boostSpeed;
            _boostText.gameObject.SetActive(true);
            Destroy(collision.gameObject);
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.CompareTag("WorldCollision"))
        {
            _currentSpeed = _regularSpeed;
            _boostText.gameObject.SetActive(false);
        }

        _currentHealth -= _collisionDamageAmount;
        _healthSlider.value = _currentHealth;
        _healthText.SetText(Mathf.RoundToInt((_currentHealth / (float)_maxHealth) * 100f) + "%");
    }

    void Update()
    {
        float move = 0f;
        float steer = 0f;

        if (Keyboard.current.wKey.isPressed)
        {
            move = 1f;
        }
        else if (Keyboard.current.sKey.isPressed)
        {
            move = -1f;
        }

        steer = 0f;

        if (move != 0f)
        {
            if (Keyboard.current.aKey.isPressed)
            {
                steer = 1f;
            }
            else if (Keyboard.current.dKey.isPressed)
            {
                steer = -1f;
            }
        }

        float moveAmount = move * _currentSpeed * Time.deltaTime;
        float steerAmount = steer * _steerSpeed * Time.deltaTime;

        transform.Translate(0, moveAmount, 0);
        transform.Rotate(0, 0, steerAmount);
    }
}
