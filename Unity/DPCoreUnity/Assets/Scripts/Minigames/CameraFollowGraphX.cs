using UnityEngine;

public class CameraFollowGraphX : MonoBehaviour
{
    public LineRenderer graphLine;
    public float xOffset = 2f;     // how much space ahead of the line
    public float smoothSpeed = 5f; // follow smoothness

    void LateUpdate()
    {
        if (graphLine.positionCount == 0) return;

        Vector3 lastPoint = graphLine.GetPosition(graphLine.positionCount - 1);

        float targetX = lastPoint.x + xOffset;

        Vector3 targetPos = new Vector3(
            targetX,
            transform.position.y,
            transform.position.z
        );

        transform.position = Vector3.Lerp(
            transform.position,
            targetPos,
            smoothSpeed * Time.deltaTime
        );
    }
}