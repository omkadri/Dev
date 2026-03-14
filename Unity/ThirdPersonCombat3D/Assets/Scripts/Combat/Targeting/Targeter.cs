using System.Collections.Generic;
using Unity.Cinemachine;
using UnityEngine;

public class Targeter : MonoBehaviour
{
    [SerializeField] CinemachineTargetGroup _cinemachineTargetGroup;
    public List<Target> _targets = new List<Target>();

    public Target CurrentTarget { get; set; }

    void OnTriggerEnter(Collider other)
    {
        if (!other.TryGetComponent<Target>(out Target target)) { return; }

        _targets.Add(other.GetComponent<Target>());
        target.OnDestroyedEvent += RemoveTarget;
    }

    void OnTriggerExit(Collider other)
    {
        if (!other.TryGetComponent<Target>(out Target target)) { return; }

        _targets.Remove(other.GetComponent<Target>());

        RemoveTarget(target);
    }

    public bool SelectTarget()
    {
        if (_targets.Count == 0) { return false; }

        CurrentTarget = _targets[0];
        _cinemachineTargetGroup.AddMember(CurrentTarget.transform, 1f, 2f); //are weight and radius magic numbers?
        
        return true;
    }

    public void CancelTarget()
    {
        if (CurrentTarget == null) { return; }

        _cinemachineTargetGroup.RemoveMember(CurrentTarget.transform);
        CurrentTarget = null;
    }

    void RemoveTarget(Target target)
    {
        if (CurrentTarget == target)
        {
            _cinemachineTargetGroup.RemoveMember(CurrentTarget.transform);
            CurrentTarget = null;
        }

        target.OnDestroyedEvent -= RemoveTarget;
        _targets.Remove(target);
    }
}