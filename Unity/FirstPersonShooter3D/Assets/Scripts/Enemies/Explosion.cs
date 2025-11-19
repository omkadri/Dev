using UnityEngine;

public class Explosion : MonoBehaviour
{
    [SerializeField] float _radius = 1.5f;
    [SerializeField] int _damage = 3;

    void Start()
    {
        Explode();
    }

    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, _radius);
    }

    void Explode()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, _radius);

        foreach (Collider hitCollider in hitColliders)
        {
            PlayerHealth playerhealth = hitCollider.GetComponent<PlayerHealth>();

            if (!playerhealth) continue;

            playerhealth.TakeDamage(_damage);

            break;
        }
    }
}
