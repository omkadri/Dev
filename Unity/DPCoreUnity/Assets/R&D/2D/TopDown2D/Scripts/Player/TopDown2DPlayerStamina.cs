using UnityEngine;
using UnityEngine.UI;

public class TopDown2DPlayerStamina : Singleton<TopDown2DPlayerStamina>
{
    public int CurrentStamina { get; private set; }

    [SerializeField] Sprite fullStaminaImage, emptyStaminaImage;

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
    }


    public void RefreshStamina()
    {
        if ( CurrentStamina < maxStamina )
        {
            CurrentStamina++;
        }
        UpdateStaminaImages();
    }


    void UpdateStaminaImages()
    {
        for ( int i = 0; i < maxStamina; i++ )
        {
            if ( i <= CurrentStamina - 1 )
            {
                staminaContainer.GetChild( i ).GetComponent<Image>().sprite = fullStaminaImage;
            }
            else
            {
                staminaContainer.GetChild( i ).GetComponent<Image>().sprite = emptyStaminaImage;
            }
        }
    }
}