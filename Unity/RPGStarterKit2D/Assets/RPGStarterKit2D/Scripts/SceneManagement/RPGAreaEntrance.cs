using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGAreaEntrance : MonoBehaviour 
{
    public string transitionName;

    [SerializeField] float moveSpeedWaitTime = .5f;


    void Start() 
    {  
        if (RPGPlayerController.Instance != null) 
        {
            if (transitionName == RPGPlayerController.Instance.areaTransitionName) {
                RPGPlayerController.Instance.transform.position = transform.position;
                StartCoroutine(HeroMoveDelayRoutine());

                if (RPGUIFade.Instance != null) 
                {
                    RPGUIFade.Instance.FadeToClear();
                }
            }
        }
    }


    IEnumerator HeroMoveDelayRoutine() 
    {
        RPGPlayerController.Instance.canMove = false;
        yield return new WaitForSeconds(moveSpeedWaitTime);
        RPGPlayerController.Instance.canMove = true;
    }
}