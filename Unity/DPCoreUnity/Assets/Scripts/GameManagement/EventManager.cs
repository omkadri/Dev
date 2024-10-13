using System;
using System.Collections.Generic;
using UnityEngine;

public class EventManager : MonoBehaviour
{
    // Dictionary to hold events and their listeners
    private static Dictionary<string, Action> eventDictionary = new Dictionary<string, Action>();

    // Add a listener to an event
    public static void StartListening(string eventName, Action listener)
    {
        if (!eventDictionary.TryGetValue(eventName, out Action thisEvent))
        {
            thisEvent = delegate { };
            eventDictionary.Add(eventName, thisEvent);
        }
        thisEvent += listener;
    }

    // Remove a listener from an event
    public static void StopListening(string eventName, Action listener)
    {
        if (eventDictionary.TryGetValue(eventName, out Action thisEvent))
        {
            thisEvent -= listener;
        }
    }

    // Trigger an event
    public static void TriggerEvent(string eventName)
    {
        if (eventDictionary.TryGetValue(eventName, out Action thisEvent))
        {
            thisEvent?.Invoke();
        }
    }
}