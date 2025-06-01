using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DDefender : MonoBehaviour
{
        [SerializeField] int _starCost = 100;
        
        public int GetStarCost()
        {
                return _starCost;
        }

        public void AddStars( int amount )
        {
              FindFirstObjectByType<LaneDefense2DStarDisplay>().AddStars( amount );//TODO: Fix tight coupling
        }
}