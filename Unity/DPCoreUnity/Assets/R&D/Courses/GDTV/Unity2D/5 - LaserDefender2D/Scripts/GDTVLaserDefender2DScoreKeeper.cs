using System;
using Unity.Mathematics;
using UnityEngine;

public class GDTVLaserDefender2DScoreKeeper : MonoBehaviour
{
    private int currentScore;

    static GDTVLaserDefender2DScoreKeeper instance;


    void Awake()
    {
        ManageSingleton();
    }


    void ManageSingleton()
    {
        if( instance != null )
        {
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
        else
        {
            instance = this;
            DontDestroyOnLoad( gameObject ) ;
        }
    }


    public int GetCurrentScore()
    {
        return currentScore;
    }


    public void ModifyScore( int value )
    {
        currentScore += value;
        Mathf.Clamp( currentScore, 0, int.MaxValue );
        Debug.Log( currentScore );
    }
    

    public void ResetScore()
    {
        currentScore = 0;
    }
}
