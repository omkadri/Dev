using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Put on gameobjects that can be toggled with opening the dialogue window (currently spacebar).  If isPerson isn't toggled true, the name box window will not appear.
public class RPGDialogueActivator : MonoBehaviour
{
    public string[] lines;
    public bool isPerson; //TODO: Create public getter

    [SerializeField] GameObject buttonUI;
    bool canActivate;
    RPGInputActions inputActions;
    const string playerString = "Player";


    void Awake() 
    {
        inputActions = new RPGInputActions();
    }


    void OnEnable() 
    {
        inputActions.Enable();
    }


    void OnDisable() 
    {
        inputActions.Disable(); 
    }


    void Start()
    {
        inputActions.Spacebar.Use.performed += _ => OpenDialogue();
    }


    void OpenDialogue() 
    {
        if (canActivate) 
        {
            if(!RPGDialogueManager.Instance.dialogueBox.activeInHierarchy) 
            {
                RPGDialogueManager.Instance.ShowDialogue(lines, isPerson);
                RPGPlayerController.Instance.canAttack = false;
                RPGPlayerController.Instance.DialogueStopMove();
            } 
            else 
            {
                RPGDialogueManager.Instance.ContinueDialogue();
            }
        }
    }


    void OnTriggerEnter2D(Collider2D other) 
    {
        if(other.tag == playerString) 
        {
            buttonUI.SetActive(true);
            canActivate = true;
        }
    }


    void OnTriggerExit2D(Collider2D other) 
    {
        if(other.tag == playerString) 
        {
            buttonUI.SetActive(false);
            canActivate = false;
        }
    }
}