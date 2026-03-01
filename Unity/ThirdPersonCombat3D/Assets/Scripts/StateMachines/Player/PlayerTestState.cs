using System.Threading;
using UnityEngine;

public class PlayerTestState : PlayerBaseState
{
    float _timer = 0f;

    public PlayerTestState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputHandler.JumpEvent += OnJump;
    }

    public override void Tick(float deltaTime)
    {
        _timer += deltaTime;

        Debug.Log(_timer);
    }

    public override void Exit()
    {
        _stateMachine.InputHandler.JumpEvent -= OnJump;
    }

    void OnJump()
    {
        _stateMachine.SwitchState(new PlayerTestState(_stateMachine));
    }
}