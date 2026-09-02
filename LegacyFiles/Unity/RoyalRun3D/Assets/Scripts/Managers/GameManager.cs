using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] PlayerController _playerController;
    [SerializeField] TMP_Text _timeText;
    [SerializeField] GameObject _gameOverText;
    [SerializeField] float _startTime = 5f;

    float _timeLeft;
    bool _isGameOver = false;

    public bool GameOver => _isGameOver;

    void Start() 
    {
        _timeLeft = _startTime;
    }

    void Update()
    {
        DecreaseTime();
    }

    public void IncreaseTime(float amount) 
    {
        _timeLeft += amount;
    }

    void DecreaseTime()
    {
        if (_isGameOver) return;

        _timeLeft -= Time.deltaTime;
        _timeText.text = _timeLeft.ToString("F1");

        if (_timeLeft <= 0f)
        {
            PlayerGameOver();
        }
    }

    void PlayerGameOver() 
    {
        _isGameOver = true;
        _playerController.enabled = false;
        _gameOverText.SetActive(true);
        Time.timeScale = .1f;
    }
}