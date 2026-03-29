using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public void LoadNextScene() //[1]//
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex; //[2]// 
        SceneManager.LoadScene(currentSceneIndex +1); //[3]//
    }
    public void LoadStartMenu() 
    {
        SceneManager.LoadScene(0);
        FindObjectOfType<GameSession>().ResetGame();
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}

// [1] Although the code being written is changing things around, we do not need any outputs from this function. We just need to pass data from one variable to another.

// [2] This line is basically getting the current scene number and passing it into our own variable so that we can accessit more easily.

// [3] In Unity, the build index number can be identified in the buil settings (under scenes in build). The top of the list begins with 0.