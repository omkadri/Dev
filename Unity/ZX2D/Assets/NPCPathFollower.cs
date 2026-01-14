using UnityEngine;
using System.Collections;

class NPCPathFollower : MonoBehaviour
{
    [SerializeField] Transform[] _waypoints;
    [SerializeField] float _speed = 5f;
    [SerializeField] float _turnSpeed = 200f; // degrees per second
    [SerializeField] float _collisionPauseDuration = 2f; // seconds to pause on collision

    int _currentIndex = 0;
    bool _isPaused = false;

    void Update()
    {
        if (_waypoints.Length == 0 || _isPaused) return;

        Vector2 moveDir = ((Vector2)_waypoints[_currentIndex].position - (Vector2)transform.position).normalized;

        // Move forward
        transform.position += (Vector3)moveDir * _speed * Time.deltaTime;

        // Desired rotation
        float targetAngle = Mathf.Atan2(moveDir.y, moveDir.x) * Mathf.Rad2Deg + 90f; // if sprite points up
        Quaternion targetRotation = Quaternion.Euler(0, 0, targetAngle);

        // Smooth rotation
        transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, _turnSpeed * Time.deltaTime);

        // Waypoint check
        if (Vector2.Distance(transform.position, _waypoints[_currentIndex].position) < 0.1f)
        {
            _currentIndex = (_currentIndex + 1) % _waypoints.Length;
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (!_isPaused)
            StartCoroutine(PauseMovement());
    }

    IEnumerator PauseMovement()
    {
        _isPaused = true;
        yield return new WaitForSeconds(_collisionPauseDuration);
        _isPaused = false;
    }
}