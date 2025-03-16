using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Put on gameobjects that can be toggled with opening the dialogue window (currently spacebar).  If isPerson isn't toggled true, the name box window will not appear.
public class RPGDialogueActivator : MonoBehaviour
{
    #region Public Variables

    public string[] lines;
    public bool isPerson;

    #endregion

    #region Private Variables 

    [SerializeField] private GameObject buttonUI;
    private bool canActivate;
    private RPGPlayerControls playerControls;
    private const string playerString = "Player";

    #endregion

    #region Unity Methods

    private void Awake() {
        playerControls = new RPGPlayerControls();
    }

    private void OnEnable() {
        playerControls.Enable();
    }

    private void OnDisable() {
        playerControls.Disable(); 
    }

    private void Start()
    {
        playerControls.Spacebar.Use.performed += _ => OpenDialogue();
    }

    #endregion

    #region Private Methods 

    private void OpenDialogue() {
        if (canActivate) {
            if(!RPGDialogueManager.Instance.dialogueBox.activeInHierarchy) {
                RPGDialogueManager.Instance.ShowDialogue(lines, isPerson);
                RPGPlayerController.Instance.canAttack = false;
                RPGPlayerController.Instance.DialogueStopMove();
            } else {
                RPGDialogueManager.Instance.ContinueDialogue();
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if(other.tag == playerString) {
            buttonUI.SetActive(true);
            canActivate = true;
        }
    }

    private void OnTriggerExit2D(Collider2D other) {
        if(other.tag == playerString) {
            buttonUI.SetActive(false);
            canActivate = false;
        }
    }

    #endregion
}
