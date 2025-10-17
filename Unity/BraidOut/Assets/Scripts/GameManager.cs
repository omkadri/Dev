using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] string _firstLevelSceneName;
    [SerializeField] string _gameOverSceneName;
    [SerializeField] string _mainMenuSceneName;

    string _lastLevelReachedName;

    public void LoadFirstLevelScene()
    {
        SceneUtils.LoadSceneByName(_firstLevelSceneName);
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