using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumberWizard : MonoBehaviour
{
    // Start is called before the first frame update

    int min = 1;
    int max = 1000;
    int guess = 500;
    void StartGame()
        {
            Debug.Log("Welcome to Number Wizard");
            Debug.Log("Pick a number between " + min + " and " + max);
            Debug.Log("Is your number higher or lower than " + guess + " ?");
            Debug.Log("Press Up Arrow for Higher / Down Arrow for Lower.");
            max = max + 1;
        }

    void guessAgain()
        {
            guess = (max + min) / 2;
            Debug.Log("Is your number " + guess + "?");
            Debug.Log("(Up Arrow = Higher, Down Arrow = Lower, Enter = Correct!)");
        }

    void Start()
    {
        StartGame();     
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            min = guess;
            guessAgain();
        }

        else if (Input.GetKeyUp(KeyCode.DownArrow))
        {
            max = guess;
            guessAgain();
        }

        else if (Input.GetKeyUp(KeyCode.Return))
        {
            Debug.Log("Yeayyy! Thank you for playing!");
            StartGame();

        }
    }
}
