using UnityEngine;
using TMPro;

public class Death : MonoBehaviour
{
    [SerializeField] string _gameOverSceneName;


    void OnTriggerEnter2D(Collider2D other)
    {
            SceneUtils.LoadSceneByName(_gameOverSceneName);// TODO: Delegate to game manager????
    }
}
