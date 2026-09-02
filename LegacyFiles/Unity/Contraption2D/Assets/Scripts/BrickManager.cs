using UnityEngine;

public class BrickManager : MonoBehaviour
{
    [SerializeField] float _checkInterval = 0.1f;
    float _timer;

    [SerializeField] string _levelCompleteScenename;

    void Update()
    {
        _timer += Time.deltaTime;

        if (_timer >= _checkInterval)
        {
            _timer = 0f;
            CheckWinCondition();
        }
    }

    void CheckWinCondition()
    {
        if (transform.childCount == 0)
        {
            SceneUtils.LoadSceneByName(_levelCompleteScenename);
        }
    }
}