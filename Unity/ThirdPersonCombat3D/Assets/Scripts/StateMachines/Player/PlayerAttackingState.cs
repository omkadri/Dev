using UnityEngine;

public class PlayerAttackingState : PlayerBaseState
{
    float _previousFrameTime;

    Attack _attack;

    public PlayerAttackingState(PlayerStateMachine stateMachine, int attackIndex) : base(stateMachine)
    {
        _attack = _stateMachine.Attacks[attackIndex];
    }

    public override void Enter()
    {
        _stateMachine.Animator.CrossFadeInFixedTime(_attack.AnimationName, _attack.TransitionDuration); //CrossFadeInFixedTime plays new animations in a way that blends them from the current animation
    }

    public override void Tick(float deltaTime)
    {
        Move(deltaTime);
        FaceTarget();

        float normalizedTime = GetNormalizedTime();//TODO: Does this cause performance issues?

        if (normalizedTime >= _previousFrameTime && normalizedTime < 1f)
        {
            if (_stateMachine.InputHandler.IsAttacking)//TODO: Investigate timed button press over holding the button.
            {
                TryComboAttack(normalizedTime);
            }
        }
        else
        {
            //go back to locomotion
        }

        _previousFrameTime = normalizedTime;
    }


    public override void Exit()
    {
    }

    void TryComboAttack(float normalizedTime)
    {
        if (_attack.ComboStateIndex == -1) { return; }

        if (normalizedTime < _attack.ComboAttackTime) { return; }

        _stateMachine.SwitchState( new PlayerAttackingState(_stateMachine, _attack.ComboStateIndex));
    }


    float GetNormalizedTime()//TODO: Rename this to something more specific
    {
        AnimatorStateInfo currentInfo = _stateMachine.Animator.GetCurrentAnimatorStateInfo(0);
        AnimatorStateInfo nextInfo = _stateMachine.Animator.GetNextAnimatorStateInfo(0);

        if (_stateMachine.Animator.IsInTransition(0) && nextInfo.IsTag("Attack"))
        {
            return nextInfo.normalizedTime;// normalizedTime is how far along an animation is
        }
        else if (!_stateMachine.Animator.IsInTransition(0) && currentInfo.IsTag("Attack"))
        {
            return currentInfo.normalizedTime;
        }
        else
        {
            return 0f;
        }
    }
}