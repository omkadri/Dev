using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class RPGDialogueManager : Singleton<RPGDialogueManager>
{
    [SerializeField] public GameObject dialogueBox;
    public bool justStarted;//TODO: Create public getter

    [SerializeField] int currentLine;
    [SerializeField] TMP_Text dialogueText;
    [SerializeField] TMP_Text nameText;
    [SerializeField] GameObject nameBox;
    string[] dialogueLines;
    const string startsWithSignifierString = "n-";


    public void ContinueDialogue()
    {
        if (!justStarted)
        {
        currentLine++;
            if (currentLine >= dialogueLines.Length)
            {
                dialogueBox.SetActive(false);
                justStarted = true;
                RPGPlayerController.Instance.canMove = true;
                RPGPlayerController.Instance.canAttack = true;
            }
            else
            {
                CheckIfName();
                dialogueText.text = dialogueLines[currentLine];
            }
        }
        else
        {
            justStarted = false;
        }
    }
    

    // newLines is passed through from the DialogueActivator class that calls this function
    public void ShowDialogue(string[] newLines, bool isPerson) 
    {
        justStarted = true;
        dialogueLines = newLines;
        currentLine = 0;
        CheckIfName();
        dialogueText.text = dialogueLines[currentLine];
        dialogueBox.SetActive(true);
        nameBox.SetActive(isPerson);
        RPGPlayerController.Instance.canMove = false;
        ContinueDialogue();
    }


    // Can signify who's talking in the inspector
    public void CheckIfName() 
    {
        if (dialogueLines[currentLine].StartsWith(startsWithSignifierString)) 
        {
            nameText.text = dialogueLines[currentLine].Replace(startsWithSignifierString, "");
            currentLine++;
        }
    }
}