using UnityEngine;
using UnityEngine.InputSystem;

public class GameFeelTemplate2DPlayerInput : MonoBehaviour
{
    GameFeelTemplate2DInputActions inputActions;
    InputAction move;
    InputAction jump;


    void Awake()
    {
        inputActions = new GameFeelTemplate2DInputActions();

        move = inputActions.Player.Move;
        jump = inputActions.Player.Jump;
    }


    void OnEnable()
    {
        inputActions.Enable();
    }


    void OnDisable()
    {
        inputActions.Disable();
    }
}