using UnityEngine;

public class SceneManager : MonoBehaviour
{
    [SerializeField] string _firstLevelSceneName;
    [SerializeField] string _levelSelectSceneName;
    [SerializeField] string _gameOverSceneName;
    [SerializeField] string _mainMenuSceneName;

    string _lastLevelReachedName;

    public void LoadSceneByName(string sceneName)
    {
        SceneUtils.LoadSceneByName(sceneName);
    }

    public void LoadLevelSelectScene()
    {
        SceneUtils.LoadSceneByName(_levelSelectSceneName);
    }

    public void LoadGameOverScene()
    {
        SceneUtils.LoadSceneByName(_gameOverSceneName);
    }

    public void LoadMainMenuScene()
    {
        SceneUtils.LoadSceneByName(_mainMenuSceneName);
    }


    public void QuitGame()
    {
        Application.Quit();
    }

    public string GetLastLevelReached()
    {
        return _lastLevelReachedName;
    }


    public void SetLastLevelReached(string levelName)
    {
        _lastLevelReachedName = levelName;
    }
}