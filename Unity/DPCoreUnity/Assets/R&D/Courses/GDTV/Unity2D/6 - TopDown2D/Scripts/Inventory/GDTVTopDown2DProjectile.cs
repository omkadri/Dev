using Unity.Mathematics;
using UnityEngine;

public class GDTVTopDown2DProjectile : MonoBehaviour
{
    [SerializeField] float moveSpeed = 22f;
    [SerializeField] GameObject hitVFXPrefab;

    GDTVTopDown2DWeaponInfoSO weaponInfo;
    Vector3 startPos;


    void Start()
    {
        startPos = transform.position;
    }


    void Update()
    {
        MoveProjectile();
        DetectFireDistance();
    }


    public void UpdateWeaponInfo( GDTVTopDown2DWeaponInfoSO weaponInfo )
    {
        this.weaponInfo = weaponInfo;
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        GDTVTopDown2DEnemyHealth enemyHealth = other.gameObject.GetComponent<GDTVTopDown2DEnemyHealth>();
        GDTVTopDown2DIndestructible indestructible = other.gameObject.GetComponent<GDTVTopDown2DIndestructible>();

        if ( !other.isTrigger && ( enemyHealth || indestructible ) )
        {
            if ( enemyHealth )
            {
                enemyHealth.TakeDamage( weaponInfo.weaponDamage );//TODO: Investigate using enemyHealth?.TakeDamage() on this line and other similar lines.
            }
            Instantiate( hitVFXPrefab, transform.position, transform.rotation );
            Destroy( gameObject );
        }
    }


    void DetectFireDistance()
    {
        if ( Vector3.Distance( transform.position, startPos ) > weaponInfo.weaponRange )
        {
            Destroy( gameObject );
        }
    }


    void MoveProjectile()
    {
        transform.Translate( Vector3.right * Time.deltaTime * moveSpeed );
    }
}
