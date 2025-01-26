using UnityEngine;

public class GDTVTopDown2DAreaEntrance : MonoBehaviour
{
    [SerializeField] string transitionName;


    void Start()
    {
        if ( transitionName == GDTVTopDown2DSceneManagement.Instance.SceneTransitionName )
        {
            GDTVTopDown2DPlayerController.Instance.transform.position = this.transform.position;
            GDTVTopDown2DCameraController.Instance.SetPlayerCameraFollow();
            GDTVTopDown2DScreenFade.Instance.FadeToClear();
        }
    }
}
