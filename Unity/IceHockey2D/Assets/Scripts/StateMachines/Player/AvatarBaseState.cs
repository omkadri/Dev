using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AvatarBaseState : State
{
    protected AvatarStateMachine _stateMachine;

    public AvatarBaseState(AvatarStateMachine stateMachine)
    {
        this._stateMachine = stateMachine;
    }
}