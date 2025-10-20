using UnityEngine;

public class BrickManager : MonoBehaviour
{
    public float _checkInterval = 0.5f; // Check every half-second
    private float _timer;

    [SerializeField] string _levelCompleteScenename;

    private void Update()
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