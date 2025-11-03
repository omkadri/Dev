using UnityEngine;

[System.Serializable]
public class PowerUpData
{
    public string powerUpName;  // Name of the power-up
    public Sprite icon;         // Icon to display
}

public class PowerUp : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField] private float fallSpeed = 5f;  // units per second

    [Header("Power-Up List")]
    [SerializeField] private PowerUpData[] powerUps; // All available power-ups

    private PowerUpData currentPowerUp;   // The power-up assigned when spawned
    private SpriteRenderer spriteRenderer;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        if (spriteRenderer == null)
        {
            Debug.LogWarning("PowerUp requires a SpriteRenderer!");
        }
    }

    private void Start()
    {
        SpawnRandomPowerUp();
    }

    private void Update()
    {
        transform.Translate(Vector3.down * fallSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Paddle"))
        {
            Debug.Log($"Power-up collected: {currentPowerUp.powerUpName}");
            Destroy(gameObject);
        }
    }

    private void SpawnRandomPowerUp()
    {
        if (powerUps == null || powerUps.Length == 0)
        {
            Debug.LogWarning("No power-ups assigned in the list!");
            return;
        }

        // Pick a random power-up from the list
        currentPowerUp = powerUps[Random.Range(0, powerUps.Length)];

        // Update the SpriteRenderer with the assigned icon
        if (spriteRenderer != null && currentPowerUp.icon != null)
        {
            spriteRenderer.sprite = currentPowerUp.icon;
        }

        Debug.Log($"Power-up spawned: {currentPowerUp.powerUpName}");
    }
}