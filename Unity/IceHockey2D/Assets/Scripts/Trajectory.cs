using UnityEngine;
using UnityEngine.InputSystem;

public class Trajectory : MonoBehaviour
{
    [SerializeField] Camera _camera;

    void Update()
    {
        Vector3 mousePosition = Mouse.current.position.ReadValue();
        mousePosition.z = -_camera.transform.position.z;

        Vector3 worldMousePosition = _camera.ScreenToWorldPoint(mousePosition);
        Vector2 direction = worldMousePosition - transform.position;

        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        transform.rotation = Quaternion.Euler(0f, 0f, angle - 90f);
    }
}