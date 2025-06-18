using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Trivia2DGameManager : MonoBehaviour
{
    Trivia2D _quiz;
    Trivia2DEndScreen _endScreen;


    void Awake()
    {
        _quiz = FindFirstObjectByType<Trivia2D>();
        _endScreen = FindFirstObjectByType<Trivia2DEndScreen>();
    }


    void Start()
    { 
        _quiz.gameObject.SetActive(true);
        _endScreen.gameObject.SetActive(false);
    }


    void Update()
    {
        if (_quiz.IsComplete)
        {
            _quiz.gameObject.SetActive(false);
            _endScreen.gameObject.SetActive(true);
            _endScreen.ShowFinalScore();
        }
    }


    public void OnReplayLevel()
    {
        SceneUtils.ReloadCurrentScene();
    }
}