using UnityEngine;

public class Health : MonoBehaviour
{
    [SerializeField] int _totalHealth = 100;

    int _currentHealth;

    void Start()
    {
        _currentHealth = _totalHealth;
    }

    public void HealDamage(int amount)
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
}