using UnityEngine;

public class GDTVTopDown2DShooter : MonoBehaviour, GDTVTopDown2DIEnemy
{
    [SerializeField] GameObject bulletPrefab;

    public void Attack()
    {
        Vector2 targetDir = GDTVTopDown2DPlayerController.Instance.transform.position - transform.position;

        GameObject newBullet = Instantiate( bulletPrefab, transform.position, Quaternion.identity );
        newBullet.transform.right = targetDir;
    }
}