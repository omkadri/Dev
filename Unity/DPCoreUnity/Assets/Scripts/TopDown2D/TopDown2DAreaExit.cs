using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopDown2DAreaExit : MonoBehaviour
{
    [SerializeField] string sceneToLoad;
    [SerializeField] string sceneTransitionName;

    float waitToLoadTime = 1;

    
    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<TopDown2DPlayerController>() )
        {
            TopDown2DSceneManagement.Instance.SetTransitionName( sceneTransitionName );
            TopDown2DScreenFade.Instance.FadeToBlack();
            StartCoroutine( LoadSceneRoutine() );
        }
    }


    IEnumerator LoadSceneRoutine()
    {
        while ( waitToLoadTime >= 0 )
        {
            waitToLoadTime -= Time.deltaTime;
            yield return null;
        }

        SceneUtils.LoadSceneByName( sceneToLoad );
    }
}