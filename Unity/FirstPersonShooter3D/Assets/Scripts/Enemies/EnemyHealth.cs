using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] GameObject _deathVFX;
    [SerializeField] int _startingHealth = 3;

    int _currentHealth;

    GameManager _gameManager;

    void Awake() 
    {
        _currentHealth = _startingHealth;
    }

    void Start()
    {
        _gameManager = FindFirstObjectByType<GameManager>();
        _gameManager.AdjustEnemiesLeft(1);
    }

    public void TakeDamage(int amount) 
    {
        _currentHealth -= amount;

        if (_currentHealth <= 0)
        {
            _gameManager.AdjustEnemiesLeft(-1);
            SelfDestruct();
        }
    }

    public void SelfDestruct()
    {
        Instantiate(_deathVFX, transform.position, Quaternion.identity);
        Destroy(this.gameObject);
    }
}
