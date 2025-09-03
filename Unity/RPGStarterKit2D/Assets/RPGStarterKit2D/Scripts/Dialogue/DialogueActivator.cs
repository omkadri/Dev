using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Put on gameobjects that can be toggled with opening the dialogue window (currently spacebar).  If isPerson isn't toggled true, the name box window will not appear.
public class DialogueActivator : MonoBehaviour
{
    public string[] lines;
    public bool isPerson;

    [SerializeField] GameObject buttonUI;
    bool canActivate;
    InputActions inputActions;
    const string playerString = "Player";


    void Awake() 
    {
        inputActions = new InputActions();
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
            if(!DialogueManager.Instance.dialogueBox.activeInHierarchy) 
            {
                DialogueManager.Instance.ShowDialogue(lines, isPerson);
                PlayerController.Instance.canAttack = false;
                PlayerController.Instance.DialogueStopMove();
            } 
            else 
            {
                DialogueManager.Instance.ContinueDialogue();
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