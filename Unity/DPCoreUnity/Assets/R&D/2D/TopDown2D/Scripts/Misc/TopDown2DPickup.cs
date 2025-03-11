using UnityEngine;

public class TopDown2DPickup : MonoBehaviour
{
    [SerializeField] float pickupDistance = 5f;
    [SerializeField] float accelerationRate = 0.2f;
    [SerializeField] float moveSpeed = 3f;

    Vector3 moveDir;
    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        Vector3 playerPos = TopDown2DPlayerController.Instance.transform.position;

        if ( Vector3.Distance( transform.position, playerPos ) < pickupDistance )
        {
            moveDir = ( playerPos - transform.position ).normalized;
            moveSpeed += accelerationRate;
        }
        else
        {
            moveDir = Vector3.zero;
            moveSpeed = 0;
        }
    }


    void FixedUpdate()
    {
        rb2d.linearVelocity = moveDir * moveSpeed * Time.deltaTime;
    }

    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<TopDown2DPlayerController>() )
        {
            Destroy( gameObject );
        }
    }
}