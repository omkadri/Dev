using System;
using Unity.Mathematics;
using UnityEngine;

public class LaserDefender2DScoreKeeper : MonoBehaviour
{
    static LaserDefender2DScoreKeeper _instance;
    
    private int _currentScore;


    void Awake()
    {
        ManageSingleton();
    }


    void ManageSingleton()
    {
        if ( _instance != null )
        {
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
        else
        {
            _instance = this;
            DontDestroyOnLoad( gameObject ) ;
        }
    }


    public int GetCurrentScore()
    {
        return _currentScore;
    }


    public void ModifyScore( int value )
    {
        _currentScore += value;
        Mathf.Clamp( _currentScore, 0, int.MaxValue );
        Debug.Log( _currentScore );
    }
    

    public void ResetScore()
    {
        _currentScore = 0;
    }
}