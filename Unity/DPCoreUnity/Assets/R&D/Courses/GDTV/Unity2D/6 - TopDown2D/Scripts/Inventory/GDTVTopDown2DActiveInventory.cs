using Unity.VisualScripting;
using UnityEngine;

public class GDTVTopDown2DActiveInventory : MonoBehaviour
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

        ToggleActiveHighlight( 0 );
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

        ChangeActiveWeapon();//TODO: Investigate moving ChangeActiveWeapon() into ToggleActiveSlot()
    }


    void ChangeActiveWeapon()
    {
        if ( GDTVTopDown2DActiveWeapon.Instance.CurrentActiveWeapon != null )
        {
            Destroy( GDTVTopDown2DActiveWeapon.Instance.CurrentActiveWeapon.gameObject );
        }

        if ( !transform.GetChild( activeSlotIndexNum ).GetComponentInChildren<GDTVTopDown2DInventorySlot>() )
        {
            GDTVTopDown2DActiveWeapon.Instance.SetWeaponNull();
            return;
        }

        GameObject weaponToSpawn = transform.GetChild( activeSlotIndexNum ).GetComponentInChildren<GDTVTopDown2DInventorySlot>().GetWeaponInfo().weaponPrefab;
        Debug.Log( transform.GetChild( activeSlotIndexNum ).GetComponent<GDTVTopDown2DInventorySlot>().GetWeaponInfo().weaponPrefab.name + " Equipped");

        GameObject newWeapon = Instantiate( weaponToSpawn, GDTVTopDown2DActiveWeapon.Instance.transform.position, Quaternion.identity );

        newWeapon.transform.parent = GDTVTopDown2DActiveWeapon.Instance.transform;

        GDTVTopDown2DActiveWeapon.Instance.NewWeapon( newWeapon.GetComponent<MonoBehaviour>() );
    }
}