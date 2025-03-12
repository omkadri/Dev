using UnityEngine;
using TMPro;

public class TopDown2DEconomyManager : Singleton<TopDown2DEconomyManager>
{
    TMP_Text currencyText;
    int currentCurrency = 0;

    const string COIN_AMOUNT_TEXT_REF = "CurrencyAmountText";


    public void UpdateCurrency()
    {
        currentCurrency += 1; //TODO: fix magic number

        if ( currencyText == null )
        {
            currencyText = GameObject.Find( COIN_AMOUNT_TEXT_REF ).GetComponent<TMP_Text>();
        }

        currencyText.text = currentCurrency.ToString( "D3" ); //D3 ensure there are always 3 digits
    }
}
