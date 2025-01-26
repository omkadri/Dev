using UnityEngine;

public class GDTVTopDownActiveInventory : MonoBehaviour
{
    int activeSlotIndexNum;

    GDTVTopDown2DInputActions inputActions;


    void Awake()
    {
        inputActions = new GDTVTopDown2DInputActions();
    }


    void Start()
    {
        inputActions.Inventory.Keyboard.performed += ctx => ToggleActiveSlot( ( int ) ctx.ReadValue<float>() );
    }


    void OnEnable()
    {
        inputActions.Enable();
    }


    void ToggleActiveSlot( int numValue )
    {
        ToggleActiveHighlight( numValue - 1 );
    }


    void ToggleActiveHighlight( int indexNum )
    {
        activeSlotIndexNum = indexNum;

        foreach ( Transform inventorySlot in this.transform )
        {
            inventorySlot.GetChild( 0 ).gameObject.SetActive( false );
        }

        this.transform.GetChild( indexNum ).GetChild( 0 ).gameObject.SetActive( true );//this will only work if active highlight is the first child
    }
}
