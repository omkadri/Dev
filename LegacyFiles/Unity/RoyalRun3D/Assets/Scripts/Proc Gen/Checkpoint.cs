using UnityEngine;

public class Checkpoint : MonoBehaviour
{
    [SerializeField] float _checkpointTimeExtension = 5f;
    [SerializeField] float _obstacleDecreaseTimeAmount = .2f;

    GameManager _gameManager;
    ObstacleSpawner _obstacleSpawner;

    const string _playerString = "Player";

    void Start()
    {
        _gameManager = FindFirstObjectByType<GameManager>();
        _obstacleSpawner = FindFirstObjectByType<ObstacleSpawner>();
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag(_playerString)) 
        {
            _gameManager.IncreaseTime(_checkpointTimeExtension);
            _obstacleSpawner.DecreaseObstacleSpawnTime(_obstacleDecreaseTimeAmount);
        }    
    }
}
