using System;
using Unity.Mathematics;
using UnityEngine;

public class LaserDefender2DScoreKeeper : MonoBehaviour
{
    private int currentScore;

    static LaserDefender2DScoreKeeper instance;


    void Awake()
    {
        ManageSingleton();
    }


    void ManageSingleton()
    {
        if ( instance != null )
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