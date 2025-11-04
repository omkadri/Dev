using UnityEngine;

public class FlyAtPlayer : MonoBehaviour
{
    [SerializeField] float _speed = 1.0f;
    [SerializeField] Transform _player;
    Vector3 _playerPos;

    void Start()
    {
        _playerPos = _player.transform.position;
    }

    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, _playerPos, _speed*Time.deltaTime);
    }
}