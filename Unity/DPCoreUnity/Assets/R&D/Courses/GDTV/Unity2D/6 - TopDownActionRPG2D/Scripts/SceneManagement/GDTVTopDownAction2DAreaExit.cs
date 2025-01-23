using UnityEngine;
using UnityEngine.SceneManagement;

public class GDTVTopDownAction2DAreaExit : MonoBehaviour
{
    [SerializeField] string sceneToLoad;
    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<GDTVTopDownAction2DPlayerController>() )
        {
            SceneManager.LoadScene( sceneToLoad );
        }
    }
}
