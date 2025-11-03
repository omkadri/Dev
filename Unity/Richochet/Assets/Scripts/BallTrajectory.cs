using UnityEngine;
using UnityEngine.InputSystem;

public class BallTrajectory : MonoBehaviour
{
    private InputActions _inputActions;
    private InputAction _launchBallAction;

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
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mousePos.z = 0f;

        Vector3 direction = mousePos - transform.position;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        transform.rotation = Quaternion.Euler(new Vector3(0, 0, angle - 90f));
    }
}