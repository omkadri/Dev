using System.Collections.Generic;
using UnityEngine;

public class Targeter : MonoBehaviour
{
    public List<Target> _targets = new List<Target>();

    public Target CurrentTarget { get; set; }

    void OnTriggerEnter(Collider other)
    {
        if (!other.TryGetComponent<Target>(out Target target)) { return; }
        _targets.Add(other.GetComponent<Target>());
    }

    void OnTriggerExit(Collider other)
    {
        if (!other.TryGetComponent<Target>(out Target target)) { return; }
        _targets.Remove(other.GetComponent<Target>());
    }

    public bool SelectTarget()
    {
        if (_targets.Count == 0) { return false; }

        CurrentTarget = _targets[0];
        
        return true;
    }

    public void CancelTarget()
    {
        CurrentTarget = null;
    }
}