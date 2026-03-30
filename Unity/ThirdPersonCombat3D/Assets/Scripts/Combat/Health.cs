using UnityEngine;
using System;

public class Health : MonoBehaviour
{
    [SerializeField] int _maxHealth = 100;//TODO: should this be a float???

    int _currentHealth;

    public event Action OnTakeDamage;

    void Start()
    {
        _currentHealth = _maxHealth;
    }

    public void DealDamage(int damageAmount)
    {
        if (_currentHealth <= 0) { return; }

        _currentHealth = Mathf.Max( _currentHealth - damageAmount, 0); //returns whatever number is higher

        OnTakeDamage?.Invoke();

        Debug.Log(_currentHealth);
    }
}