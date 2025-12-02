using UnityEngine;

public static class PhysicsUtils
{
    /// <summary>
    /// Performs a raycast and returns whether it hit anything.
    /// </summary>
    /// <param name="origin">The starting point of the ray.</param>
    /// <param name="direction">The direction of the ray.</param>
    /// <param name="distance">The maximum distance the ray should check.</param>
    /// <param name="layerMask">The layer mask to filter objects.</param>
    /// <returns>True if the ray hit something, false otherwise.</returns>
    public static bool PerformRaycast(Vector3 origin, Vector3 direction, float distance, LayerMask layerMask)
    {
        return Physics.Raycast(origin, direction, distance, layerMask);
    }

    /// <summary>
    /// Calculates the trajectory of a projectile given initial velocity and gravity.
    /// </summary>
    /// <param name="startPosition">The starting position of the projectile.</param>
    /// <param name="velocity">The initial velocity of the projectile.</param>
    /// <param name="gravity">The gravity affecting the projectile.</param>
    /// <param name="time">The time since the projectile was launched.</param>
    /// <returns>The position of the projectile at the given time.</returns>
    public static Vector3 CalculateProjectileTrajectory(Vector3 startPosition, Vector3 velocity, Vector3 gravity, float time)
    {
        return startPosition + velocity * time + 0.5f * gravity * time * time;
    }

    /// <summary>
    /// Checks if a point is within a specified radius of another point.
    /// </summary>
    /// <param name="point">The point to check.</param>
    /// <param name="center">The center of the radius.</param>
    /// <param name="radius">The radius to check within.</param>
    /// <returns>True if the point is within the radius, false otherwise.</returns>
    public static bool IsPointWithinRadius(Vector3 point, Vector3 center, float radius)
    {
        return Vector3.Distance(point, center) <= radius;
    }

    /// <summary>
    /// Applies an explosion force to a Rigidbody.
    /// </summary>
    /// <param name="rigidbody">The Rigidbody to apply the force to.</param>
    /// <param name="explosionPosition">The center of the explosion.</param>
    /// <param name="explosionForce">The magnitude of the explosion force.</param>
    /// <param name="explosionRadius">The radius of the explosion.</param>
    /// <param name="upwardsModifier">The upward force applied by the explosion.</param>
    public static void ApplyExplosionForce(Rigidbody rigidbody, Vector3 explosionPosition, float explosionForce, float explosionRadius, float upwardsModifier = 0f)
    {
        if (rigidbody != null)
        {
            rigidbody.AddExplosionForce(explosionForce, explosionPosition, explosionRadius, upwardsModifier);
        }
    }

    /// <summary>
    /// Calculates the reflection vector given an incoming direction and a surface normal.
    /// </summary>
    /// <param name="incoming">The incoming direction vector.</param>
    /// <param name="normal">The surface normal vector.</param>
    /// <returns>The reflected vector.</returns>
    public static Vector3 CalculateReflection(Vector3 incoming, Vector3 normal)
    {
        return Vector3.Reflect(incoming, normal);
    }

    /// <summary>
    /// Determines if an object is grounded based on a downward raycast.
    /// </summary>
    /// <param name="position">The position to check from.</param>
    /// <param name="groundDistance">The maximum distance to check for ground.</param>
    /// <param name="layerMask">The layer mask to filter ground objects.</param>
    /// <returns>True if the object is grounded, false otherwise.</returns>
    public static bool IsGrounded(Vector3 position, float groundDistance, LayerMask layerMask)
    {
        return Physics.Raycast(position, Vector3.down, groundDistance, layerMask);
    }

    /// <summary>
    /// Calculates the gravitational force between two objects using Newton's law of universal gravitation.
    /// </summary>
    /// <param name="mass1">The mass of the first object.</param>
    /// <param name="mass2">The mass of the second object.</param>
    /// <param name="distance">The distance between the objects.</param>
    /// <returns>The gravitational force between the objects.</returns>
    public static float CalculateGravitationalForce(float mass1, float mass2, float distance)
    {
        const float G = 6.67430e-11f; // Gravitational constant
        return G * (mass1 * mass2) / (distance * distance);
    }

    /// <summary>
    /// Finds the closest object to a given position from an array of objects.
    /// </summary>
    /// <param name="position">The position to compare distances from.</param>
    /// <param name="objects">An array of Transforms to check.</param>
    /// <returns>The Transform of the closest object, or null if the array is empty.</returns>
    public static Transform FindClosestObject(Vector3 position, Transform[] objects)
    {
        Transform closest = null;
        float closestDistance = float.MaxValue;

        foreach (var obj in objects)
        {
            float distance = Vector3.Distance(position, obj.position);
            if (distance < closestDistance)
            {
                closest = obj;
                closestDistance = distance;
            }
        }

        return closest;
    }

    /// <summary>
    /// Simulates a bounce by calculating the velocity after impact based on restitution.
    /// </summary>
    /// <param name="velocity">The incoming velocity vector.</param>
    /// <param name="normal">The normal of the surface being impacted.</param>
    /// <param name="restitution">The restitution coefficient (bounciness).</param>
    /// <returns>The velocity vector after the bounce.</returns>
    public static Vector3 SimulateBounce(Vector3 velocity, Vector3 normal, float restitution)
    {
        return Vector3.Reflect(velocity, normal) * restitution;
    }

    /// <summary>
    /// Calculates the angular velocity required to rotate an object to a target direction.
    /// </summary>
    /// <param name="currentForward">The current forward direction of the object.</param>
    /// <param name="targetForward">The desired forward direction of the object.</param>
    /// <param name="rotationSpeed">The speed of the rotation.</param>
    /// <returns>The angular velocity vector.</returns>
    public static Vector3 CalculateAngularVelocity(Vector3 currentForward, Vector3 targetForward, float rotationSpeed)
    {
        Vector3 axis = Vector3.Cross(currentForward, targetForward).normalized;
        float angle = Vector3.Angle(currentForward, targetForward);
        return axis * angle * rotationSpeed;
    }

    /// <summary>
    /// Checks if a Rigidbody is moving above a specified speed threshold.
    /// </summary>
    /// <param name="rigidbody">The Rigidbody to check.</param>
    /// <param name="speedThreshold">The speed threshold.</param>
    /// <returns>True if the Rigidbody's speed is above the threshold, false otherwise.</returns>
    public static bool IsMovingAboveThreshold(Rigidbody rigidbody, float speedThreshold)
    {
        return rigidbody.linearVelocity.magnitude > speedThreshold;
    }

    /// <summary>
    /// Determines if a point is within the bounds of a collider.
    /// </summary>
    /// <param name="point">The point to check.</param>
    /// <param name="collider">The collider to check against.</param>
    /// <returns>True if the point is within the collider's bounds, false otherwise.</returns>
    public static bool IsPointWithinCollider(Vector3 point, Collider collider)
    {
        return collider.bounds.Contains(point);
    }
}
