using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GlitchGarden2DSceneManager : MonoBehaviour
{
    [SerializeField] int _timeToWait = 4;
    int _currentSceneIndex;


    void Start()
    {
        _currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        if ( _currentSceneIndex == 0 )
        {
            StartCoroutine( WaitForTimeRoutine() );
        }
    }

    
    IEnumerator WaitForTimeRoutine()
    {
        yield return new WaitForSeconds( _timeToWait );
        LoadNextScene(); 
    }


    public void LoadNextScene()
    {
        SceneManager.LoadScene( _currentSceneIndex + 1 ); //because in build index, Loading screen is 0 and Start Screen is 1
    }

    }


