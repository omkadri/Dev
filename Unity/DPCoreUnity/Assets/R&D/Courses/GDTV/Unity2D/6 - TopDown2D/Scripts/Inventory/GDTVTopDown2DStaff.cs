using UnityEngine;

public class GDTVTopDown2DStaff : MonoBehaviour, GDTVTopDown2DIWeapon
{
    public void Attack()
    {
        Debug.Log( "Staff Attack" );
        GDTVTopDown2DActiveWeapon.Instance.ToggleIsAttacking( false );
    }
}
