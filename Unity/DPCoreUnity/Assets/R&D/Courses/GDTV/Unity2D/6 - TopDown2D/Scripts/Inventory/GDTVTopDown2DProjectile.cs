using UnityEngine;

public class GDTVTopDown2DProjectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 22f;


    void Update()
    {
        MoveProjectile();
    }


    void MoveProjectile()
    {
        transform.Translate( Vector3.right * Time.deltaTime * moveSpeed );
    }
}
