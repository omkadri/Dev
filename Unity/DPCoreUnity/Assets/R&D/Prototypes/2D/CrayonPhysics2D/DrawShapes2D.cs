using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DrawShapes : MonoBehaviour
{
    public LineRenderer lineRenderer; // Reference to the LineRenderer component
    private List<Vector3> points = new List<Vector3>(); // List to store the points of the drawn shape


    void Update()
    {
        // Check if the mouse button is held down
        if ( Input.GetMouseButton( 0 ) )
        {
            Vector3 mousePos = Camera.main.ScreenToWorldPoint( Input.mousePosition );
            mousePos.z = 0; // Ensure Z position is zero for 2D
            // Add the current mouse position to the points list
            points.Add( mousePos );
            lineRenderer.positionCount = points.Count; // Update LineRenderer's point count
            lineRenderer.SetPositions(points.ToArray()); // Set the positions for the LineRenderer
        }

        // When the mouse button is released, create the collider and reset points
        if ( Input.GetMouseButtonUp( 0 ) )
        {
            if ( points.Count > 1 ) // Ensure there's enough points to form a shape
            {
                CreateCollider(); // Create the collider from the drawn shape
            }
            points.Clear(); // Clear the points for the next shape
            lineRenderer.positionCount = 0; // Reset LineRenderer
        }
    }


    void CreateCollider()
    {
        // Add a PolygonCollider2D to the GameObject
        PolygonCollider2D collider = gameObject.AddComponent<PolygonCollider2D>();
        // Convert Vector3 points to Vector2 and set them to the collider
        Vector2[] pointsArray = points.Select(p => new Vector2( p.x, p.y )).ToArray();
        collider.points = pointsArray; // Assign points to the collider
    }
}
