using UnityEngine;

public class GDTVTopDownAction2DAreaEntrance : MonoBehaviour
{
    [SerializeField] string transitionName;

    void Start()
    {
        if ( transitionName == GDTVTopDownAction2DSceneManagement.Instance.SceneTransitionName )
        {
            GDTVTopDownAction2DPlayerController.Instance.transform.position = this.transform.position;
        }
    }
}
