using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class TopDown2DPlayerStamina : Singleton<TopDown2DPlayerStamina>
{
    public int CurrentStamina { get; private set; }

    [SerializeField] Sprite fullStaminaImage, emptyStaminaImage;
    [SerializeField] int timeBetweenStaminaRefresh = 3;
    [SerializeField] int _staminaRefreshAmount = 1;

    Transform staminaContainer;
    int startingStamina = 3; //TODO: Make this a serialized field
    int maxStamina;
    const string STAMINA_CONTAINER_REF = "PlayerStaminaContainer";


    protected override void Awake()
    {
        base.Awake();
        maxStamina = startingStamina;
        CurrentStamina = startingStamina;
    }


    void Start()
    {
        staminaContainer = GameObject.Find( STAMINA_CONTAINER_REF ).transform;
    }


    public void UseStamina()
    {
        CurrentStamina--;
        UpdateStaminaImages();
        StopAllCoroutines(); //TODO: will need to fix this if additional coroutines are added to this class
        StartCoroutine( RefreshStaminaRoutine() );
    }


    public void RefreshStamina( int amount )
    {
        if ( CurrentStamina < maxStamina && !TopDown2DPlayerHealth.Instance.IsDead )
        {
            CurrentStamina += amount;
        }
        UpdateStaminaImages();
    }


    public void ReplenishStamina()
    {
        CurrentStamina = startingStamina;
        UpdateStaminaImages();
    }


    IEnumerator RefreshStaminaRoutine()
    {
        while (true)
        {
            yield return new WaitForSeconds( timeBetweenStaminaRefresh );
            RefreshStamina( _staminaRefreshAmount );
        }
    }


    void UpdateStaminaImages()
    {
        for ( int i = 0; i < maxStamina; i++ )
        {
            Transform child = staminaContainer.GetChild( i );
            Image image = child?.GetComponent<Image>();

            if ( i <= CurrentStamina - 1 )
            {
                image.sprite = fullStaminaImage;
            }
            else
            {
                image.sprite = emptyStaminaImage;
            }
        }
    }
}