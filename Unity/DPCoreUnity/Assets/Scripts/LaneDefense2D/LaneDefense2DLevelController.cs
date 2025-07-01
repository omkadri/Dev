using System.Collections;
using UnityEngine;

public class LaneDefense2DLevelController : MonoBehaviour
{
    [SerializeField] GameObject _levelCompleteLabel;
    [SerializeField] float _loadDelay = 4f;
    [SerializeField] string _sceneToLoad; //TODO: Hash this value.
    int _numberOfAttackers = 0;
    bool _levelTimerFinished = false;
    AudioSource _audioSource;


    void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }


    void Start()
    {
        _levelCompleteLabel.SetActive(false);
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
        _levelCompleteLabel.SetActive(true);
        _audioSource.Play();
        yield return new WaitForSeconds(_loadDelay);
        SceneUtils.LoadSceneByName(_sceneToLoad);
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