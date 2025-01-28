using UnityEngine;

public class GDTVTopDown2DBow : MonoBehaviour, GDTVTopDown2DIWeapon
{
    public void Attack()
    {
        Debug.Log( "Bow Attack" );
        GDTVTopDown2DActiveWeapon.Instance.ToggleIsAttacking( false );
    }
}
