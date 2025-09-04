using Unity.VisualScripting;
using UnityEngine;

public class ActiveInventory : Singleton<ActiveInventory>
{
    int activeSlotIndexNum;

    InputActions inputActions;


    protected override void Awake()
    {
        base.Awake();

        inputActions = new InputActions();
    }


    void Start()
    {
        inputActions.Inventory.Keyboard.performed += ctx => ToggleActiveSlot((int) ctx.ReadValue<float>());
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
        ToggleActiveHighlight(0);
    }


    void ToggleActiveSlot(int numValue)
    {
        ToggleActiveHighlight(numValue - 1);
    }


    void ToggleActiveHighlight(int indexNum)
    {
        activeSlotIndexNum = indexNum;

        foreach (Transform inventorySlot in this.transform)
        {
            inventorySlot.GetChild(0).gameObject.SetActive(false);
        }

        this.transform.GetChild(indexNum).GetChild(0).gameObject.SetActive(true);//this will only work if active highlight is the first child

        ChangeActiveWeapon();//TODO: Investigate moving ChangeActiveWeapon() into ToggleActiveSlot()
    }


    void ChangeActiveWeapon()
    {
        if (PlayerHealth.Instance.IsDead)
        {
            return;
        }

        if (ActiveWeapon.Instance.CurrentActiveWeapon != null)
        {
            Destroy(ActiveWeapon.Instance.CurrentActiveWeapon.gameObject);
        }

        Transform childTransform = transform.GetChild(activeSlotIndexNum);
        InventorySlot inventorySlot = childTransform.GetComponentInChildren<InventorySlot>();
        WeaponInfoSO weaponInfo = inventorySlot?.GetWeaponInfo();
        GameObject weaponToSpawn = weaponInfo?.WeaponPrefab;

        if (weaponInfo == null)
        {
            ActiveWeapon.Instance.SetWeaponNull();
            return;
        }


        Debug.Log(weaponToSpawn.name + " Equipped");

        GameObject newWeapon = Instantiate(weaponToSpawn, ActiveWeapon.Instance.transform.position, Quaternion.identity);
        ActiveWeapon.Instance.transform.rotation = Quaternion.Euler(0, 0, 0);
        newWeapon.transform.parent = ActiveWeapon.Instance.transform;

        ActiveWeapon.Instance.NewWeapon(newWeapon.GetComponent<MonoBehaviour>());
    }
}