using UnityEngine;

public class SpeedPickup : Pickup
{
    [SerializeField] float _adjustChangeMoveSpeedAmount = 3f;

    LevelGenerator _levelGenerator;

    public void Init(LevelGenerator levelGenerator) 
    {
        this._levelGenerator = levelGenerator;
    }

    protected override void OnPickup()
    {
        _levelGenerator.ChangeChunkMoveSpeed(_adjustChangeMoveSpeedAmount);
    }
}
