using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] float _speed = 30f;
    [SerializeField] GameObject _projectileHitVFX;

    Rigidbody _rb;

    int _damage;

    void Awake()
    {
        _rb = GetComponent<Rigidbody>();
    }

    void Start()
    {
        _rb.linearVelocity = transform.forward * _speed;
    }

    public void Init(int damage) 
    {
        this._damage = damage;
    }

    void OnTriggerEnter(Collider other) 
    {
        PlayerHealth playerHealth = other.GetComponent<PlayerHealth>();
        playerHealth?.TakeDamage(_damage);

        Instantiate(_projectileHitVFX, transform.position, Quaternion.identity);
        Destroy(this.gameObject);
    }
}
