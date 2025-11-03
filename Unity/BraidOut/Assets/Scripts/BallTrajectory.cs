using UnityEngine;
using UnityEngine.InputSystem;

public class BallTrajectory : MonoBehaviour
{
    InputActions _inputActions;
    InputAction _launchBallAction;

    void Awake()
    {
        _inputActions = new InputActions();
        _launchBallAction = _inputActions.Player.LaunchBall;
    }

    void OnEnable()
    {
        _inputActions.Enable();
        _launchBallAction.performed += OnLaunchBall;
    }

    void OnDisable()
    {
        _launchBallAction.performed -= OnLaunchBall;
        _inputActions.Disable();
    }

    void OnLaunchBall(InputAction.CallbackContext context)
    {
        Destroy(gameObject);
    }

    void Update()
    {
        // --- NEW INPUT SYSTEM POINTER SUPPORT ---
        Vector2 screenPos = Vector2.zero;

        // Check for active touch (mobile)
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)
        {
            screenPos = Touchscreen.current.primaryTouch.position.ReadValue();
        }
        // Fallback to mouse (editor, PC, etc.)
        else if (Mouse.current != null)
        {
            screenPos = Mouse.current.position.ReadValue();
        }

        // Convert screen position to world position
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(new Vector3(screenPos.x, screenPos.y, Camera.main.nearClipPlane));
        mousePos.z = 0f;

        // Rotate toward the pointer
        Vector3 direction = mousePos - transform.position;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(new Vector3(0, 0, angle - 90f));
    }
}