using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DDefender : MonoBehaviour
{
        [SerializeField] int _starCost = 100;

        public void AddStars( int amount )
        {
              FindFirstObjectByType<GlitchGarden2DStarDisplay>().AddStars( amount );//TODO: Fix tight coupling
        }
}