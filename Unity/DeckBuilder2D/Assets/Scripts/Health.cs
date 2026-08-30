using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _healthText;
    [SerializeField] Slider _healthSlider;
    [SerializeField] int _totalHealth = 100;

    int _currentHealth;

    void Start()
    {
        _currentHealth = _totalHealth;
        UpdateHealthUI();
    }

    void UpdateHealthUI()
    {
        _healthText.text = _currentHealth + " / " + _totalHealth;
        _healthSlider.maxValue = _totalHealth;
        _healthSlider.value = _currentHealth;
    } 

    public void Heal(int amount)
    {
        if (amount <= 0)
        {
            return;
        }

        _currentHealth += amount;

        if (_currentHealth > _totalHealth)
        {
            _currentHealth = _totalHealth;
        }
        UpdateHealthUI();
    }

    public void TakeDamage(int amount)
    {
        _currentHealth -= amount;

        if(_currentHealth < 0)
        {
            _currentHealth = 0;
        }

        UpdateHealthUI();
    }

    
    public bool IsAlive()
    {
        return _currentHealth > 0;
    }
}