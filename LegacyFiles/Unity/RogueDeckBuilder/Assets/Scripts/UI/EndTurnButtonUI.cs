using UnityEngine;

public class EndTurnButtonUI : MonoBehaviour
{
    public void OnClick()
    {
        EnemyTurnGA _enemyTurnGA = new();
        ActionSystem.Instance.Perform(_enemyTurnGA);
    }
}
