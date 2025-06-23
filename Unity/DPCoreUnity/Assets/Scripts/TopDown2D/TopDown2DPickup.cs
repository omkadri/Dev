using System.Collections;
using UnityEngine;

public class TopDown2DPickup : MonoBehaviour
{
    enum PickupType
    {
        CoinPickup,
        HealthPickup,
        StaminaPickup,
    }

    [SerializeField] PickupType pickupType;
    [SerializeField] int _pickupValue = 1;
    [SerializeField] float pickupDistance = 5f;
    [SerializeField] float accelerationRate = .2f;
    [SerializeField] float moveSpeed = 3f;
    [SerializeField] AnimationCurve animCurve;
    [SerializeField] float heightY = 1.5f;
    [SerializeField] float popDuration = 1f;

    Vector3 moveDir;
    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void Start()
    {
        StartCoroutine(AnimCurveSpawnRoutine());
    }


    void Update()
    {
        Vector3 playerPos = TopDown2DPlayerController.Instance.transform.position;

        if (Vector3.Distance(transform.position, playerPos) < pickupDistance)
        {
            moveDir = (playerPos - transform.position).normalized;
            moveSpeed += accelerationRate;
        }
        else
        {
            moveDir = Vector3.zero;
            moveSpeed = 0f;
        }
    }


    void FixedUpdate()
    {
        rb2d.linearVelocity = moveDir * moveSpeed * Time.deltaTime;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<TopDown2DPlayerController>())
        {
            DetectPickupType();
            Destroy(gameObject);
        }
    }


    IEnumerator AnimCurveSpawnRoutine()
    {
        Vector2 startPos = transform.position;
        float randomX = transform.position.x + Random.Range(-2f, 2f);
        float randomY = transform.position.y + Random.Range(-1f, 1f);
        Vector2 endPos = new Vector2(randomX, randomY);
        float timePassed = 0f;

        while (timePassed < popDuration)
        {
            timePassed += Time.deltaTime;
            float linearT = timePassed / popDuration;
            float heightT = animCurve.Evaluate(linearT);
            float height = Mathf.Lerp(0f, heightY, heightT);

            transform.position = Vector2.Lerp(startPos, endPos, linearT) + new Vector2(0f, height);

            yield return null;
        }
    }


    void DetectPickupType()
    {
        switch(pickupType)
        {
            case PickupType.CoinPickup:
                TopDown2DEconomyManager.Instance.UpdateCurrency(_pickupValue);
                break;
            case PickupType.HealthPickup:
                TopDown2DPlayerHealth.Instance.HealPlayer(_pickupValue);
                break;
            case PickupType.StaminaPickup:
                TopDown2DPlayerStamina.Instance.RefreshStamina(_pickupValue);
                break;
            default:
                break;
        }
    }
}