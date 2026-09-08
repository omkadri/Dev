using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : Singleton<GameManager>
{
    private bool isGameActive = true;
    [SerializeField] private float transitionTime;

    [SerializeField] private TextMeshProUGUI winLoseDisplay;
    private void OnEnable()
    {
        BossEvents.OnBossDeath += PlayerWin;
        PlayerEvents.OnPlayerDeath += PlayerLose;
    }

    private void OnDisable()
    {
        BossEvents.OnBossDeath -= PlayerWin;
        PlayerEvents.OnPlayerDeath -= PlayerLose;
    }

    public bool IsGameActive()
    {
        return isGameActive;
    }

    private void PlayerWin()
    {
        isGameActive = false;
        winLoseDisplay.text = "You defeated the boss!";
        StartCoroutine(RestartGame());
    }

    private void PlayerLose()
    {
        isGameActive = false;
        winLoseDisplay.text = "Game Over!";
        StartCoroutine(RestartGame());
    }

    private IEnumerator RestartGame()
    {
        yield return new WaitForSeconds(transitionTime);
        SceneManager.LoadScene("GameScene");
    }
}
