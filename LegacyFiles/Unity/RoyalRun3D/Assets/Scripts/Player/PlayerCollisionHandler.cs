using UnityEngine;

public class PlayerCollisionHandler : MonoBehaviour
{
    [SerializeField] Animator _animator;
    [SerializeField] float _collisionCooldown = 1f;
    [SerializeField] float _adjustChangeMoveSpeedAmount = -2f;

    const string _hitString = "Hit";
    float _cooldownTimer = 0f;

    LevelGenerator _levelGenerator;

    void Start()
    {
        _levelGenerator = FindFirstObjectByType<LevelGenerator>();
    }

    void Update() 
    {
        _cooldownTimer += Time.deltaTime;
    }

    void OnCollisionEnter(Collision other) 
    {
        if (_cooldownTimer < _collisionCooldown) return;

        _levelGenerator.ChangeChunkMoveSpeed(_adjustChangeMoveSpeedAmount);
        _animator.SetTrigger(_hitString);
        _cooldownTimer = 0f;
    }
}
