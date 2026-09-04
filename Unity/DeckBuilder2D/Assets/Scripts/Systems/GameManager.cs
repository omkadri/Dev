using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager>
{
    [SerializeField] float _transitionTime = 3f;
    [SerializeField] TextMeshProUGUI _winLoseDisplay;
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
        _winLoseDisplay.text = "You defeated the Enemy";
        StartCoroutine(RestartGame());
    }

    void PlayerLose()
    {
        _winLoseDisplay.text = "Game Over";
        StartCoroutine(RestartGame());
    }

    IEnumerator RestartGame()
    {
        yield return new WaitForSeconds(_transitionTime);
        SceneManager.LoadScene("GameScene");
    }
}