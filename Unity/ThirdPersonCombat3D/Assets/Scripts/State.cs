using UnityEngine;

public abstract class State
{
    public abstract void Enter();

    public abstract void Tick(float deltaTime); // deltaTime for framerate independence

    public abstract void Exit();

}