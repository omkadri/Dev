using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class CameraMidpointFollow : MonoBehaviour
{
    [SerializeField] private List<Transform> targets = new List<Transform>();
    [SerializeField] private Vector3 offset = new Vector3(0, 0, -10);
    [SerializeField] private float zoomSpeed = 5f;
    [SerializeField] private float minZoom = 5f;
    [SerializeField] private float maxZoom = 15f;

    private Camera cam;

    private void Awake()
    {
        cam = GetComponent<Camera>();
    }

    private void LateUpdate()
    {
        if (targets == null || targets.Count == 0)
            return;

        Vector3 midpoint = Vector3.zero;
        int validTargets = 0;

        foreach (Transform t in targets)
        {
            if (t != null)
            {
                midpoint += t.position;
                validTargets++;
            }
        }

        if (validTargets == 0)
            return;

        midpoint /= validTargets;
        transform.position = midpoint + offset;

        if (cam.orthographic)
        {
            float greatestDistance = GetGreatestDistance();
            float targetZoom = Mathf.Clamp(greatestDistance, minZoom, maxZoom);
            cam.orthographicSize = Mathf.Lerp(cam.orthographicSize, targetZoom, Time.deltaTime * zoomSpeed);
        }
    }

    private float GetGreatestDistance()
    {
        if (targets.Count <= 1) return minZoom;

        float maxDistance = 0f;
        for (int i = 0; i < targets.Count; i++)
        {
            if (targets[i] == null) continue;
            for (int j = i + 1; j < targets.Count; j++)
            {
                if (targets[j] == null) continue;
                float dist = Vector3.Distance(targets[i].position, targets[j].position);
                if (dist > maxDistance)
                    maxDistance = dist;
            }
        }

        return maxDistance;
    }
}