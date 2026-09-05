using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;

public class MouseCursor : MonoBehaviour
{

    Image cursorImage;


    void Awake()
    {
        cursorImage = GetComponent<Image>();
    }


    void Start()
    {
        Cursor.visible = false;
        if (Application.isPlaying)
        {
            Cursor.lockState = CursorLockMode.None;
        }
        else
        {
            Cursor.lockState = CursorLockMode.Confined;
        }
    }


    void Update()
    {
        Vector2 cursorPos = Mouse.current.position.ReadValue();
        cursorImage.rectTransform.position = cursorPos;
        transform.position = cursorPos;

        //if (!Application.isPlaying) { return; }

        //Cursor.visible = false;
    }
}