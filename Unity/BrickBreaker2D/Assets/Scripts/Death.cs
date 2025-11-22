using UnityEngine;

public class Death : MonoBehaviour
{
    [SerializeField] string _gameOverSceneName;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Ball") && Ball.ActiveCount <= 1)
        {
            SceneUtils.LoadSceneByName(_gameOverSceneName); // TODO: Delegate to game manager????
        }
        Destroy(other.gameObject);
    }
}