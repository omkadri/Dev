using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameSession : MonoBehaviour
{
    //config params
    [Range(0.1f, 10f)][SerializeField] float gameSpeed = 1f;
    [SerializeField] int pointsPerBlockDestroyed = 83;
    [SerializeField] TextMeshProUGUI scoreText;


    // state variables
    [SerializeField] int currentScore = 0;

    private void Awake() // This function carry's over the gameStatus parameters from one level to another without getting getting destroyed.
    {
        int gameStatusCount = FindObjectsOfType<GameSession>().Length;
        if (gameStatusCount > 1)
        {
            gameObject.SetActive(false);// when this method is called, for a fraction of a second, 2 GameSession objects exist. If another function tries to access them during this moment, there will be a null value returned (). This line prevents that by disabling the 

            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
    }


    private void Start()
    {
        scoreText.text = currentScore.ToString();
    }

    void Update()
    {
        Time.timeScale = gameSpeed;
    }

 

    public void AddToScore()
    {
        currentScore += pointsPerBlockDestroyed;
        scoreText.text = currentScore.ToString();
    }

    public void ResetGame()
    {
        Destroy(gameObject);
    }
}
