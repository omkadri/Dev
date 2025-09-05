using System.Collections;
using UnityEngine;

public class EnemySystem : MonoBehaviour
{
    void OnEnable()
    {
        ActionSystem.AttachPerformer<EnemyTurnGA>(EnemyTurnPerformer);
    }


    void OnDisable()
    {
        ActionSystem.DetachPerformer<EnemyTurnGA>();
    }


    //Performers

    IEnumerator EnemyTurnPerformer(EnemyTurnGA enemyTurnGA)
    {
        Debug.Log("Enemy Turn");
        yield return new WaitForSeconds(2f);//TODO: magic number
        Debug.Log("Enemy Turn Ended");
    }
}
