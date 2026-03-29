using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; /*[1]*/

public class AdventureGame : MonoBehaviour //[2]//
{
    [SerializeField] Text textComponent; /*[3]*/
    [SerializeField] State startingState;/*[4]*/



    State state; /*[5]*/

    void Start()
    {
        state = startingState;
        textComponent.text = state.GetStateStory(); /*[6]*/ /*[7]*/
    }

    void Update()
    {
        ManageState();
    }

    private void ManageState()
    {
        var nextStates = state.GetNextState(); /*[8]*/
        for (int index = 0; index < nextStates.Length; index++) /*[9]*/ 
        {
            if (Input.GetKeyDown(KeyCode.Alpha1 + index))/*[10]*/
            {
                state = nextStates[index]; /*[11]*/
            }
        }
        textComponent.text = state.GetStateStory(); /*[12]*/   
    }
}


// [1] This namespace allows us to use the Text type

// [2] Scripts derived from MonoBehavior need to be attached to a game object.

// [3] Serialize feild - this allows us to make a variable available in the unity inspector. Game objects can be attached to a serialized variable so long as they are of the same type (in this case, text).

// [4] The purpose of this variable is to help us set the starting state in the Inity Inspector. Notice how the variable type is "Staet" (this is derived from the State.cs script) 

// [5] The purpose of this variable is to keep track of which state is currently active.

// [6] The ".text" part of "textComponent.text" is accessing the text property of the game object that is attached to the serialized variable.

// [7] state.GetStateStory is accessing a variable (GetStateStory) from another script (State.cs). Notice textComponent and GetStateStory are of the same variable type (string)

// [8] var is used to call a variable after its type has been declared. This is so we don't have to try and remember every type for every variable that we use. 

// [9] "nextStates.Length" refers to the number of elements in (or the size of) the current state. 

// [10] depend

// [11] 

// [12] this allow the unity editor to know which text it should be displaying.