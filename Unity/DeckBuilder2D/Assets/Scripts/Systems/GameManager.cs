using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager>
{
    [SerializeField] float _transitionTime = 3f;
    [SerializeField] TextMeshProUGUI _winLoseDisplay;

    bool _isGameActive = true;

    void OnEnable()
    {
        PlayerEvents.OnPlayerDeath += PlayerLose;
        EnemyEvents.OnEnemyDeath += PlayerWin;
    }

    void OnDisable()
    {
        PlayerEvents.OnPlayerDeath -= PlayerLose;
        EnemyEvents.OnEnemyDeath -= PlayerWin;
    }

    void PlayerWin()
    {
        _isGameActive = false;
        _winLoseDisplay.text = "You defeated the Enemy";
        StartCoroutine(RestartGame());
    }

    void PlayerLose()
    {
        _isGameActive = false;
        _winLoseDisplay.text = "Game Over";
        StartCoroutine(RestartGame());
    }

    IEnumerator RestartGame()
    {
        yield return new WaitForSeconds(_transitionTime);
        SceneManager.LoadScene("GameScene");
    }

    public bool IsGameActive()
    {
        return _isGameActive;
    }
}