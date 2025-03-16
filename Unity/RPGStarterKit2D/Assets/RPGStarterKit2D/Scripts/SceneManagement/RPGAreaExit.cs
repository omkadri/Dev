using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RPGAreaExit : MonoBehaviour
{
    public RPGAreaEntrance theEntrance;
    public float waitToLoad = 1f; 

    [SerializeField] private string areaToLoad;
    [SerializeField] private string areaTransitionName;
    private bool shouldLoadAfterFade; 

    private void Start() {
        theEntrance.transitionName = areaTransitionName;
    }

    private void Update() { 
        if(shouldLoadAfterFade) {
            waitToLoad -= Time.deltaTime;
            if(waitToLoad <= 0) {
                shouldLoadAfterFade = false;
                SceneManager.LoadScene(areaToLoad);
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if (other.tag == "Player") {
            shouldLoadAfterFade = true;
            RPGUIFade.Instance.FadeToBlack();

            RPGPlayerController.Instance.areaTransitionName = areaTransitionName;
        }
    }
}
