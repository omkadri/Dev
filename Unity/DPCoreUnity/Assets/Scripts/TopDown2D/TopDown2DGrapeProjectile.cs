using System.Collections;
using Unity.Mathematics;
using UnityEngine;

public class TopDown2DGrapeProjectile : MonoBehaviour //TODO: Investigate renaming projectile to something else (throwable, or launchable)
{
    [SerializeField] float duration = 1f;
    [SerializeField] AnimationCurve animCurve;
    [SerializeField] float heightY = 3f;
    [SerializeField] GameObject grapeProjectileShadow;
    [SerializeField] GameObject grapeSplatterPrefab;


    void Start()
    {
        GameObject grapeShadow = Instantiate(grapeProjectileShadow, transform.position + new Vector3(0, -0.3f, 0), Quaternion.identity);

        Vector3 playerPos = TopDown2DPlayerController.Instance.transform.position;
        Vector3 grapeShadowStarPos = grapeShadow.transform.position;

        StartCoroutine(ProjectileCurveRoutine(transform.position, playerPos));
        StartCoroutine(MoveGrapeShadowRoutine(grapeShadow, grapeShadowStarPos, playerPos));
    }


    IEnumerator ProjectileCurveRoutine(Vector3 startPos, Vector3 endPos)
    {
        float timePassed = 0f;

        while (timePassed < duration)
        {
            timePassed += Time.deltaTime;
            float linearT = timePassed / duration;
            float heightT = animCurve.Evaluate(linearT);
            float height = Mathf.Lerp(0f, heightY, heightT);

            transform.position = Vector2.Lerp(startPos, endPos, linearT) + new Vector2(0f, height);

            yield return null;
        }

        Instantiate(grapeSplatterPrefab, transform.position, quaternion.identity);
        Destroy(gameObject);
    }


    IEnumerator MoveGrapeShadowRoutine(GameObject grapeShadow, Vector3 startPos, Vector3 endPos)
    {
        float timePassed = 0f;

        while (timePassed < duration)
        {
            timePassed += Time.deltaTime;
            float linearT = timePassed / duration;

            grapeShadow.transform.position = Vector2.Lerp(startPos, endPos, linearT);

            yield return null;
        }

        Destroy(grapeShadow);
    }
}