using UnityEngine;
using UnityEngine.InputSystem;

public class MouseFollow : MonoBehaviour
{
    void Update()
    {
        FaceMouse();
    }


    void FaceMouse()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Mouse.current.position.ReadValue());
        Vector2 dir = transform.position - mousePos;
        transform.right = -dir;
    }
}