using UnityEngine;
using UnityEngine.SceneManagement;

public class GDTVTopDownAction2DAreaExit : MonoBehaviour
{
    [SerializeField] string sceneToLoad;
    [SerializeField] string sceneTransitionName;

    
    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<GDTVTopDownAction2DPlayerController>() )
        {
            GDTVTopDownAction2DSceneManagement.Instance.SetTransitionName( sceneTransitionName );
            SceneManager.LoadScene( sceneToLoad );
        }
    }
}
