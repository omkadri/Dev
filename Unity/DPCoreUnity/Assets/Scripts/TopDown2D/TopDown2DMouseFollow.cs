using System;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class TopDown2DMouseFollow : MonoBehaviour
{
    void Update()
    {
        FaceMouse();
    }


    void FaceMouse()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        Vector2 dir = transform.position - mousePos;
        transform.right = -dir;
    }
}