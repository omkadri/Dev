using UnityEngine;

public class GDTVTopDown2DStaff : MonoBehaviour, GDTVTopDown2DIWeapon
{
    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        Debug.Log( "Staff Attack" );
        GDTVTopDown2DActiveWeapon.Instance.ToggleIsAttacking( false );
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( GDTVTopDown2DPlayerController.Instance.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, -180, angle );
        }
        else
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, angle );
        }
    }
}
