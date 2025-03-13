using Unity.VisualScripting;
using UnityEngine;

public class TopDown2DActiveInventory : Singleton<TopDown2DActiveInventory>
{
    int activeSlotIndexNum;

    TopDown2DInputActions inputActions;


    protected override void Awake()
    {
        base.Awake();

        inputActions = new TopDown2DInputActions();
    }


    void Start()
    {
        inputActions.Inventory.Keyboard.performed += ctx => ToggleActiveSlot( ( int ) ctx.ReadValue<float>() );
    }


    void OnEnable()
    {
        inputActions.Enable();
    }


    void OnDisable()
    {
        inputActions?.Disable();
    }


    public void EquipStartingWeapon()
    {
        ToggleActiveHighlight( 0 );
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
        if ( TopDown2DPlayerHealth.Instance.IsDead )
        {
            return;
        }

        if ( TopDown2DActiveWeapon.Instance.CurrentActiveWeapon != null )
        {
            Destroy( TopDown2DActiveWeapon.Instance.CurrentActiveWeapon.gameObject );
        }

        Transform childTransform = transform.GetChild( activeSlotIndexNum );
        TopDown2DInventorySlot inventorySlot = childTransform.GetComponentInChildren<TopDown2DInventorySlot>();
        TopDown2DWeaponInfoSO weaponInfo = inventorySlot?.GetWeaponInfo();
        GameObject weaponToSpawn = weaponInfo?.weaponPrefab;

        if ( weaponInfo == null )
        {
            TopDown2DActiveWeapon.Instance.SetWeaponNull();
            return;
        }


        Debug.Log( weaponToSpawn.name + " Equipped");

        GameObject newWeapon = Instantiate( weaponToSpawn, TopDown2DActiveWeapon.Instance.transform.position, Quaternion.identity );
        TopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, 0 );
        newWeapon.transform.parent = TopDown2DActiveWeapon.Instance.transform;

        TopDown2DActiveWeapon.Instance.NewWeapon( newWeapon.GetComponent<MonoBehaviour>() );
    }
}