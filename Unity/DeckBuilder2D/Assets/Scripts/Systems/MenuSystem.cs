using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuSystem : MonoBehaviour
{
    [SerializeField] string _gameSceneName;
    [SerializeField] string _mainMenuSceneName;
    [SerializeField] string _deckBuilderSceneName;
    public void PlayGame()
    {
        SceneManager.LoadScene(_gameSceneName);
    }

    public void ReturnToMainMenu()
    {
        SceneManager.LoadScene(_mainMenuSceneName);
    }

    public void OpenDeckBuilder()
    {
        SceneManager.LoadScene(_deckBuilderSceneName);
    }

    public void QuitGame()
    {
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }
}