using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI; // Add this namespace for UI components
using UnityStandardAssets.CrossPlatformInput;

[RequireComponent(typeof(Image))] // Change to Image
public class ForcedReset : MonoBehaviour
{
    private void Update()
    {
        // if we have forced a reset ...
        if (CrossPlatformInputManager.GetButtonDown("ResetObject"))
        {
            //... reload the scene
            SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
        }
    }
}