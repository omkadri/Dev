using UnityEngine;

public class Health : MonoBehaviour
{
    [SerializeField] int _totalHealth = 100;

    int _currentHealth;

    void Start()
    {
        _currentHealth = _totalHealth;
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
        Debug.Log("Heal Activated. Current Health: " + _currentHealth);
    }

    public void TakeDamage(int amount)
    {
        _currentHealth -= amount;
        Debug.Log("Enemy Damage Taken. Current Health: " + _currentHealth);

        if(_currentHealth <= 0)
        {
            _currentHealth = 0;
            Debug.Log("Health is Zero. Death has occured!");
        }
    }

    
    public bool IsAlive()
    {
        return _currentHealth > 0;
    }
}