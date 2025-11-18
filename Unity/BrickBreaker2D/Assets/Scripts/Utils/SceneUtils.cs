using UnityEngine;
using UnityEngine.SceneManagement;

public static class SceneUtils
{
    public static void LoadSceneByName(string sceneName)
    {
        if (IsSceneValid(sceneName))
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName);
        }
        else
        {
            Debug.LogError($"Scene '{sceneName}' is not in build settings.");
        }
    }
    

    public static void LoadSceneByIndex(int sceneIndex)
    {
        if (sceneIndex >= 0 && sceneIndex < UnityEngine.SceneManagement.SceneManager.sceneCountInBuildSettings)
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene(sceneIndex);
        }
        else
        {
            Debug.LogError($"Scene index '{sceneIndex}' is out of range.");
        }
    }


    public static void ReloadCurrentScene()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene().buildIndex);
    }
    

    public static AsyncOperation LoadSceneAsync(string sceneName)
    {
        if (IsSceneValid(sceneName))
        {
            return UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName);
        }

        Debug.LogError($"Scene '{sceneName}' is not in build settings.");
        return null;
    }
    

    public static bool IsSceneValid(string sceneName)
    {
        int sceneCount = UnityEngine.SceneManagement.SceneManager.sceneCountInBuildSettings;

        for (int i = 0; i < sceneCount; i++)
        {
            string path = SceneUtility.GetScenePathByBuildIndex(i);
            string name = System.IO.Path.GetFileNameWithoutExtension(path);

            if (name == sceneName)
            {
                return true;
            }
        }

        return false;
    }


    public static string GetCurrentSceneName()
    {
        return UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
    }


    public static int GetCurrentSceneIndex()
    {
        return UnityEngine.SceneManagement.SceneManager.GetActiveScene().buildIndex;
    }
}