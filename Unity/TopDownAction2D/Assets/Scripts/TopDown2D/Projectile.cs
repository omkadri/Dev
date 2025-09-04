using Unity.Mathematics;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 22f;
    [SerializeField] GameObject hitVFXPrefab;
    [SerializeField] bool isEnemyProjectile = false;
    [SerializeField ]float projectileRange = 10f;

    Vector3 startPos;


    void Start()
    {
        startPos = transform.position;
    }


    void Update()
    {
        MoveProjectile();
        DetectFireDistance();
    }


    public void UpdateRange(float projectileRange)
    {
        this.projectileRange = projectileRange;
    }


    public void UpdateMoveSpeed(float moveSpeed)
    {
        this.projectileRange = moveSpeed;
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        EnemyHealth enemyHealth = other.gameObject.GetComponent<EnemyHealth>();
        Indestructible indestructible = other.gameObject.GetComponent<Indestructible>();
        PlayerHealth playerHealth = other.gameObject.GetComponent<PlayerHealth>();

        if (!other.isTrigger && (enemyHealth || playerHealth || indestructible))
        {
            if ((playerHealth && isEnemyProjectile || (enemyHealth && !isEnemyProjectile)))
            {
                playerHealth?.TakeDamage(1, transform);//TODO: fix magic number
                Instantiate(hitVFXPrefab, transform.position, transform.rotation);
                Destroy(gameObject);
            }
            else if (!other.isTrigger && indestructible)
            {
                Instantiate(hitVFXPrefab, transform.position, transform.rotation);
                Destroy(gameObject);
            }
        }
    }


    void DetectFireDistance()
    {
        if (Vector3.Distance(transform.position, startPos) > projectileRange)
        {
            Destroy(gameObject);
        }
    }


    void MoveProjectile()
    {
        transform.Translate(Vector3.right * Time.deltaTime * moveSpeed);
    }
}