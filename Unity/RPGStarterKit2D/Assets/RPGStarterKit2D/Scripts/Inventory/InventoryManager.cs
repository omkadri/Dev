using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Updates UI based on event system's current selected object. 
public class InventoryManager : Singleton<InventoryManager>
{
    public enum CurrentEquippedItem { Boomerang, Bomb };
    public CurrentEquippedItem currentEquippedItem;
    public GameObject itemEquippedInv;
    public GameObject currentSelectedItem;
    public GameObject inventoryContainer;

    [SerializeField] GameObject selectionBorder;
    [SerializeField] EventSystem eventSystem;
    [SerializeField] Image activeSpriteUI;
    InputActions inputActions;
    const string boomerangString = "Boomerang";
    const string bombString = "Bomb";


    protected override void Awake() 
    {
        base.Awake();
        inputActions = new InputActions();
    }


    void Start() 
    {
        inputActions.Inventory.OpenInventoryContainer.performed += _ => OpenInventoryContainer();
    }


    void OnEnable() 
    {
        inputActions.Enable();
    }


    void OnDisable() 
    {
        if (inputActions != null) 
        {
            inputActions.Disable();
        }
    }


    void Update() 
    {
        UpdateDetectIfItemChange();
    }


    // see EventSystemSpawner.cs
    public void SetEventSystem(EventSystem newEventSystem) 
    {
        eventSystem = newEventSystem;
    }


    void OpenInventoryContainer() 
    {
        if (inventoryContainer.gameObject.activeInHierarchy == false) 
        {
            inventoryContainer.gameObject.SetActive(true);
            PlayerController.Instance.PauseGame();
        }

        else if (inventoryContainer.gameObject.activeInHierarchy == true) 
        {
            inventoryContainer.gameObject.SetActive(false);
            PlayerController.Instance.UnpauseGame();
        }
    }


    void UpdateDetectIfItemChange()
    {
        if (currentSelectedItem != eventSystem.currentSelectedGameObject || currentSelectedItem == null) 
        {
            currentSelectedItem = eventSystem.currentSelectedGameObject;
            selectionBorder.transform.position = currentSelectedItem.transform.position;
            activeSpriteUI.sprite = currentSelectedItem.GetComponent<Image>().sprite;
            ChangeCurrentEquippedItem();
        }
    }


    void updateSelectionBorder() 
    {
        selectionBorder.transform.position = currentSelectedItem.transform.position;
    }


    void ChangeCurrentEquippedItem() 
    { 
        ItemDisplay thisItem = currentSelectedItem.GetComponent<ItemDisplay>();
        
        if (thisItem) 
        { 
            if (thisItem.item.itemType == boomerangString) 
            {
                currentEquippedItem = CurrentEquippedItem.Boomerang;
            } else if (thisItem.item.itemType == bombString) 
            {
                currentEquippedItem = CurrentEquippedItem.Bomb;
            } 

            itemEquippedInv = thisItem.item.useItemPrefab;
        } else 
        {
            itemEquippedInv = null;
        }
    }
}