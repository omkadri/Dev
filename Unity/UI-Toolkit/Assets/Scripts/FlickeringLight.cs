using System.Collections;
using UnityEngine;

namespace GameDevTV.AS9BH
{
    [RequireComponent(typeof(Light))]
    public class FlickeringLight : MonoBehaviour
    {
        [SerializeField] private AnimationCurve brightnessCurve;
        [SerializeField] private float flickerSpeed = 0.1f;

        private float baseIntensity;
        private Light light;

        private void Awake()
        {
            light = GetComponent<Light>();
        }

        private IEnumerator Start()
        {
            float time = 0;

            baseIntensity = light.intensity;
            while (enabled)
            {
                light.intensity = brightnessCurve.Evaluate(time) * baseIntensity;
                yield return null;
                time += Time.deltaTime * flickerSpeed;

                if (time > 1)
                {
                    time = 0;
                }
            }
        }
    }
}
