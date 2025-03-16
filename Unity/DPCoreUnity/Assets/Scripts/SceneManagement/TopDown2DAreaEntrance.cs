using UnityEngine;

public class TopDown2DAreaEntrance : MonoBehaviour
{
    [SerializeField] string transitionName;


    void Start()
    {
        if ( transitionName == TopDown2DSceneManagement.Instance.SceneTransitionName )
        {
            TopDown2DPlayerController.Instance.transform.position = this.transform.position;
            TopDown2DCameraController.Instance.SetPlayerCameraFollow();
            TopDown2DScreenFade.Instance.FadeToClear();
        }
    }
}