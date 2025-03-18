using UnityEngine;
using UnityEngine.InputSystem;

public class GameFeelTemplate2DPlayerInput : MonoBehaviour
{
    public FrameInput FrameInput { get; private set; }
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


    void Update()
    {
        FrameInput = GatherInput();
    }


    FrameInput GatherInput()
    {
        return new FrameInput
        {
            Move = move.ReadValue<Vector2>(),
            Jump = jump.WasPressedThisFrame(),
        };
    }
}


public struct FrameInput
{
    public Vector2 Move;
    public bool Jump;
}