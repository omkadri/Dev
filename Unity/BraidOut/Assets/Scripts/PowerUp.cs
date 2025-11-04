using UnityEngine;
using System; // For Action

[System.Serializable]
public class PowerUpData
{
    public string powerUpName;  // Name of the power-up
    public Sprite icon;         // Icon to display
}

public class PowerUp : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField] float fallSpeed = 5f;  // units per second

    [Header("Power-Up List")]
    [SerializeField] PowerUpData[] powerUps; // All available power-ups

    public static event Action<PowerUpData> OnPowerUpCollected; 
    // 👆 Static event so any script can subscribe easily

    PowerUpData currentPowerUp;   // The power-up assigned when spawned
    SpriteRenderer spriteRenderer;

    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        if (spriteRenderer == null)
        {
            Debug.LogWarning("PowerUp requires a SpriteRenderer!");
        }
    }

    void Start()
    {
        SpawnRandomPowerUp();
    }

    void Update()
    {
        transform.Translate(Vector3.down * fallSpeed * Time.deltaTime);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Paddle"))
        {
            OnPowerUpCollected?.Invoke(currentPowerUp);
            Destroy(gameObject);
        }
    }

    void SpawnRandomPowerUp()
    {
        if (powerUps == null || powerUps.Length == 0)
        {
            Debug.LogWarning("No power-ups assigned in the list!");
            return;
        }

        // Pick a random power-up from the list
        currentPowerUp = powerUps[UnityEngine.Random.Range(0, powerUps.Length)];

        // Update the SpriteRenderer with the assigned icon
        if (spriteRenderer != null && currentPowerUp.icon != null)
        {
            spriteRenderer.sprite = currentPowerUp.icon;
        }

        Debug.Log($"Power-up spawned: {currentPowerUp.powerUpName}");
    }
}