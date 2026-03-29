using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "State")] /*1*/

public class State : ScriptableObject /*2*/
{
    [TextArea(14, 10)] [SerializeField] string storyText; /*3*/
    [SerializeField] State[] nextStates;
    public string GetStateStory() /*4*/
    {
        return storyText;
    }

    public State[] GetNextState()
    {
        return nextStates;
    }
}

// [1] CreateAssetMenu - This makes a new entry in the create menu (Right-clicking the assets menu in Unity).

// [2] ScriptableObject is used when the script does not need to be attached to a game object.

// [3] TextArea Creates Text Box sub-object in the inspector. This is where we type our game narrative for different states.

// [4] making a variable public allows us to access it from other script (eg AdventureGame.cs)