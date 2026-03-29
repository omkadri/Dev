using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class NumberWizardUI : MonoBehaviour
{

    [SerializeField] int max;
    [SerializeField]int min;
    [SerializeField] TextMeshProUGUI guessText;
    int guess;

    // Use this for initialization
    void Start()
    {
        StartGame();
    }

    void StartGame()
    {
        NextGuess();
    }

    public void OnPressHigher()
    {
        min = guess + 1; // 2 //
        NextGuess();
    }

    public void OnPressLower()
    {
        max = guess - 1 ; // 2 //
        NextGuess();
    }

    void NextGuess()
    {
        guess = Random.Range(min, max + 1);
        guessText.text = guess.ToString();
        if (guess >= 1000)
        {
            guess = 999;
        }
    }
}

// 1 The ToString command converts data types like int and float into a string. This is necessary for being displayed in a text component.

// 2 since Random.Range is inclusive, the game can potentially guess the same number twice. This line of code prevents that from happening.