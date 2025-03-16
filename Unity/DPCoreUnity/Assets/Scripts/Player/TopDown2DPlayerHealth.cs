using System.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TopDown2DPlayerHealth : Singleton<TopDown2DPlayerHealth>
{
    public bool IsDead { get; set; }

    [Header( "Player Damage" )]
    [SerializeField] int maxHealth = 3;
    [SerializeField] float knockbackThrustAmount = 10f;
    [SerializeField] float damageRecoveryTime = 1f;

    [Header( "Player Death" )]
    [SerializeField] string playerDeathLoadScene;
    [SerializeField] float deathSceneLoadDelay = 2f; //TODO: should this be an int???

    Slider healthSlider;
    int currentHealth;
    bool canTakeDamage = true;
    TopDown2DKnockback knockback;
    TopDown2DDamageFlash damageFlash;
    const string PLAYER_HEALTH_SLIDER_REF = "PlayerHealthSlider";

    readonly int PLAYER_DEATH_HASH = Animator.StringToHash( "Death" );


    protected override void Awake()
    {
        base.Awake();
        knockback = GetComponent<TopDown2DKnockback>();
        damageFlash = GetComponent<TopDown2DDamageFlash>();
    }


    void Start()
    {
        IsDead = false;
        currentHealth = maxHealth;
        UpdateHealthSlider();
    }


    void OnCollisionStay2D( Collision2D other )//unlike OnCollisionEnter2D (which is called once), OnCollisionStay2D is called every frame the collision is occuring.
    {
        TopDown2DEnemyAI enemyAI = other.gameObject.GetComponent<TopDown2DEnemyAI>();

        if ( enemyAI )
        {
            TakeDamage( 1, other.transform );//TODO: fix magic number
        }
    }


    public void HealPlayer()
    {
        if ( currentHealth < maxHealth )
        {
            currentHealth += 1;
            UpdateHealthSlider();
        }
    }


    public void TakeDamage( int damageAmount, Transform hitTransform )
    {
        if ( !canTakeDamage )
        {
            return;
        }

        TopDown2DScreenShakeManager.Instance.ShakeScreen();
        knockback.GetKnockback( hitTransform, knockbackThrustAmount );
        StartCoroutine( damageFlash.DamageFlashRoutine() );
        canTakeDamage = false;
        currentHealth -= damageAmount;
        StartCoroutine( DamageRecoveryRoutine() );
        UpdateHealthSlider();
        DetectDeath();
    }


    void DetectDeath()
    {
        if ( currentHealth <= 0 && !IsDead )
        {
            IsDead = true;
            Destroy( TopDown2DActiveWeapon.Instance.gameObject );
            currentHealth = 0;
            GetComponent<Animator>().SetTrigger( PLAYER_DEATH_HASH );
            StartCoroutine( DeathLoadSceneRoutine() );
            Debug.Log( "Player has Died" );
        }
    }


    IEnumerator DeathLoadSceneRoutine()
    {
        yield return new WaitForSeconds( deathSceneLoadDelay );
        Destroy( gameObject );
        TopDown2DPlayerStamina.Instance.ReplenishStamina();//TODO: Find a better location for this????
        SceneManager.LoadScene( playerDeathLoadScene );
    }


    IEnumerator DamageRecoveryRoutine()
    {
        yield return new WaitForSeconds( damageRecoveryTime );
        canTakeDamage = true;
    }


    void UpdateHealthSlider()
    {
        if ( healthSlider == null )
        {
            healthSlider = GameObject.Find( PLAYER_HEALTH_SLIDER_REF ).GetComponent<Slider>();//TODO: find alternative to hard string reference
        }

        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;
    }
}