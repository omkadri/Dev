using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : Singleton<PlayerHealth>
{
    public bool IsDead { get; set; }

    [Header("Player Damage")]
    [SerializeField] int maxHealth = 3;
    [SerializeField] float knockbackThrustAmount = 10f;
    [SerializeField] float damageRecoveryTime = 1f;

    [Header("Player Death")]
    [SerializeField] string playerDeathLoadScene;
    [SerializeField] float deathSceneLoadDelay = 2f; //TODO: should this be an int???

    Slider healthSlider;
    int currentHealth;
    bool canTakeDamage = true;
    Knockback knockback;
    DamageFlash damageFlash;
    const string PLAYER_HEALTH_SLIDER_REF = "PlayerHealthSlider";

    readonly int PLAYER_DEATH_HASH = Animator.StringToHash("Death");


    protected override void Awake()
    {
        base.Awake();
        knockback = GetComponent<Knockback>();
        damageFlash = GetComponent<DamageFlash>();
    }


    void Start()
    {
        IsDead = false;
        currentHealth = maxHealth;
        UpdateHealthSlider();
    }


    void OnCollisionStay2D(Collision2D other)//unlike OnCollisionEnter2D (which is called once), OnCollisionStay2D is called every frame the collision is occuring.
    {
        EnemyAI enemyAI = other.gameObject.GetComponent<EnemyAI>();

        if (enemyAI)
        {
            TakeDamage(1, other.transform);//TODO: fix magic number
        }
    }


    public void HealPlayer(int amount)
    {
        if (currentHealth < maxHealth)
        {
            currentHealth += amount;
            UpdateHealthSlider();
        }
    }


    public void TakeDamage(int damageAmount, Transform hitTransform)
    {
        if (!canTakeDamage)
        {
            return;
        }

        ScreenShakeManager.Instance.ShakeScreen();
        knockback.GetKnockback(hitTransform, knockbackThrustAmount);
        StartCoroutine(damageFlash.DamageFlashRoutine());
        canTakeDamage = false;
        currentHealth -= damageAmount;
        StartCoroutine(DamageRecoveryRoutine());
        UpdateHealthSlider();
        DetectDeath();
    }


    void DetectDeath()
    {
        if (currentHealth <= 0 && !IsDead)
        {
            IsDead = true;
            Destroy(ActiveWeapon.Instance.gameObject);
            currentHealth = 0;
            GetComponent<Animator>().SetTrigger(PLAYER_DEATH_HASH);
            StartCoroutine(DeathLoadSceneRoutine());
            Debug.Log("Player has Died");
        }
    }


    IEnumerator DeathLoadSceneRoutine()
    {
        yield return new WaitForSeconds(deathSceneLoadDelay);
        Destroy(gameObject);
        PlayerStamina.Instance.ReplenishStamina();//TODO: Find a better location for this????
        SceneUtils.LoadSceneByName(playerDeathLoadScene);
    }


    IEnumerator DamageRecoveryRoutine()
    {
        yield return new WaitForSeconds(damageRecoveryTime);
        canTakeDamage = true;
    }


    void UpdateHealthSlider()
    {
        if (healthSlider == null)
        {
            healthSlider = GameObject.Find(PLAYER_HEALTH_SLIDER_REF).GetComponent<Slider>();//TODO: find alternative to hard string reference
        }

        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;
    }
}