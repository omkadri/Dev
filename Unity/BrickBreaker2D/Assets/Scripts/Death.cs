using UnityEngine;

public class Death : MonoBehaviour
{
    [SerializeField] string _gameOverSceneName;

    void OnEnable()
    {
        Paddle.OnDeathPowerUpCollected += TriggerGameOverScene;
    }

    void OnDisable()
    {
        Paddle.OnDeathPowerUpCollected -= TriggerGameOverScene;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Ball") && Ball.ActiveCount <= 1)
        {
            TriggerGameOverScene(); // TODO: Delegate to game manager????
        }
        Destroy(other.gameObject);
    }

    void TriggerGameOverScene()
    {
        SceneUtils.LoadSceneByName(_gameOverSceneName);
    }
}