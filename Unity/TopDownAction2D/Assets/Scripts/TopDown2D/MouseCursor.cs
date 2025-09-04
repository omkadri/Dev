using UnityEngine;
using UnityEngine.UI;

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
        Vector2 cursorPos = Input.mousePosition;
        cursorImage.rectTransform.position = cursorPos;
        transform.position = cursorPos;

        //if (!Application.isPlaying) { return; }

        //Cursor.visible = false;
    }
}