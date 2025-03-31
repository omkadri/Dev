using UnityEngine;
using UnityEngine.InputSystem;

public class ShootEmUp2DPlayerInput : MonoBehaviour
{
    public FrameInput FrameInput { get; private set; }
    ShootEmUp2DInputActions _inputActions;
    InputAction _move;
    InputAction _jump;


    void Awake()
    {
        _inputActions = new ShootEmUp2DInputActions();

        _move = _inputActions.Player.Move;
        _jump = _inputActions.Player.Jump;
    }


    void OnEnable()
    {
        _inputActions.Enable();
    }


    void OnDisable()
    {
        _inputActions.Disable();
    }


    void Update()
    {
        FrameInput = GatherInput();
    }


    FrameInput GatherInput()
    {
        return new FrameInput
        {
            Move = _move.ReadValue<Vector2>(),
            Jump = _jump.WasPressedThisFrame(),
        };
    }
}


public struct FrameInput
{
    public Vector2 Move;
    public bool Jump;
}