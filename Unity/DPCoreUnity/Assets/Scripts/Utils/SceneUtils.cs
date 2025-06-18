using UnityEngine;
using UnityEngine.SceneManagement;

public static class SceneUtils
{
    public static void LoadSceneByName( string sceneName )
    {
        if ( IsSceneValid( sceneName ) )
        {
            SceneManager.LoadScene( sceneName );
        }
        else
        {
            Debug.LogError( $"Scene '{sceneName}' is not in build settings." );
        }
    }
    

    public static void LoadSceneByIndex(int sceneIndex)
    {
        if (sceneIndex >= 0 && sceneIndex < SceneManager.sceneCountInBuildSettings)
        {
            SceneManager.LoadScene(sceneIndex);
        }
        else
        {
            Debug.LogError($"Scene index '{sceneIndex}' is out of range.");
        }
    }


    public static void ReloadCurrentScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    

    public static AsyncOperation LoadSceneAsync(string sceneName)
    {
        if (IsSceneValid(sceneName))
        {
            return SceneManager.LoadSceneAsync(sceneName);
        }

        Debug.LogError($"Scene '{sceneName}' is not in build settings.");
        return null;
    }
    

    public static bool IsSceneValid(string sceneName)
    {
        int sceneCount = SceneManager.sceneCountInBuildSettings;

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
        return SceneManager.GetActiveScene().name;
    }


    public static int GetCurrentSceneIndex()
    {
        return SceneManager.GetActiveScene().buildIndex;
    }
}