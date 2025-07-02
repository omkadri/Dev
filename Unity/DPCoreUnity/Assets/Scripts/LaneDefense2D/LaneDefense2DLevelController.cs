using System.Collections;
using UnityEngine;

public class LaneDefense2DLevelController : MonoBehaviour
{
    [SerializeField] GameObject _levelCompleteLabel;
    [SerializeField] GameObject _levelFailedLabel;
    [SerializeField] float _loadDelay = 4f;
    [SerializeField] string _sceneToLoad; //TODO: Hash this value.
    [SerializeField] string _mainMenuSceneName;
    int _numberOfAttackers = 0;
    bool _levelTimerFinished = false;
    AudioSource _audioSource;


    void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }


    void Start()
    {
        if (_levelCompleteLabel)
        {
            _levelCompleteLabel.SetActive(false);
        }
        if (_levelFailedLabel)
        {
            _levelFailedLabel.SetActive(false);
        }
    }


    public void ReloadScene()
    {
        Time.timeScale = 1;
        SceneUtils.ReloadCurrentScene();
    }


    public void LoadMainMenuScene()
    {
        Time.timeScale = 1;
        SceneUtils.LoadSceneByName(_mainMenuSceneName);
    }


    public void LoadNextScene()
    {
        Time.timeScale = 1;
        SceneUtils.LoadSceneByName(_sceneToLoad);
    }


    public void QuitGame()
    {
        Application.Quit();
    }


    public void AttackerSpawned()
    {
        _numberOfAttackers++;
    }


    public void AttackerKilled()
    {
        _numberOfAttackers--;
        if (_numberOfAttackers <= 0 && _levelTimerFinished)
        {
            StartCoroutine(HandleWinConditionRoutine());
        }
    }


    IEnumerator HandleWinConditionRoutine()
    {
        if (_levelCompleteLabel)
        {
            _levelCompleteLabel.SetActive(true);
        }
        _audioSource.Play();
        yield return new WaitForSeconds(_loadDelay);
        SceneUtils.LoadSceneByName(_sceneToLoad);
    }


    public void HandleLoseConditionRoutine()
    {
        if (_levelFailedLabel)
        {
            _levelFailedLabel.SetActive(true);
        }
        Time.timeScale = 0;
    }


    public void LevelTimerFinished()
    {
        _levelTimerFinished = true;
        StopSpawners();
    }


    void StopSpawners()
    {
        LaneDefense2DAttackerSpawner[] spawnerArray = FindObjectsByType<LaneDefense2DAttackerSpawner>(FindObjectsSortMode.None);
        foreach (LaneDefense2DAttackerSpawner spawner in spawnerArray)
        {
            spawner.StopSpawning();
        }
    }
}