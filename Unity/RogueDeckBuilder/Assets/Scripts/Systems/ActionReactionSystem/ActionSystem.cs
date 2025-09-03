using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionSystem : Singleton<ActionSystem>
{
    List<GameAction> _reactions = null;
    public bool IsPerforming { get; private set; } = false;
    static Dictionary<Type, List<Action<GameAction>>> _preSubs = new();
    static Dictionary<Type, List<Action<GameAction>>> _postSubs = new();
    static Dictionary<Type, Func<GameAction, IEnumerator>> _performers = new();


    public void Perform(GameAction action, System.Action OnPerformFinished = null)
    {
        if (IsPerforming) return;
        IsPerforming = true;
        StartCoroutine(Flow(action, () =>
        {
            IsPerforming = false;
            OnPerformFinished?.Invoke();
        }));
    }


    public void AddReaction(GameAction gameAction)
    {
        _reactions?.Add(gameAction);
    }


    IEnumerator Flow(GameAction action, Action OnFlowFinished = null)
    {
        _reactions = action.PreReactions;
        PerformSubscribers(action, _preSubs);
        yield return PerformReactions();

        _reactions = action.PerformReactions;
        yield return PerformPerformer(action);
        yield return PerformReactions();

        _reactions = action.PostReactions;
        PerformSubscribers(action, _postSubs);
        yield return PerformReactions();

        OnFlowFinished?.Invoke();
    }


    IEnumerator PerformPerformer(GameAction action)
    {
        Type type = action.GetType();
        if (_performers.ContainsKey(type))
        {
            yield return _performers[type](action);
        }
    }


    void PerformSubscribers(GameAction action, Dictionary<Type, List<Action<GameAction>>> _subs)
    {
        Type type = action.GetType();
        if (_subs.ContainsKey(type))
        {
            foreach (var sub in _subs[type])
            {
                sub(action);
            }
        }
    }


    IEnumerator PerformReactions()
    {
         foreach (var reaction in _reactions)
            {
                yield return Flow(reaction);
            }
    }


    public static void AttachPerformer<T>(Func<T, IEnumerator> performer) where T : GameAction
    {
        Type type = typeof(T);
        IEnumerator wrappedPerformer(GameAction action) => performer((T)action);
        if (_performers.ContainsKey(type)) _performers[type] = wrappedPerformer;
        else _performers.Add(type, wrappedPerformer);
    }


    public static void DetachPerformer<T>() where T : GameAction
    {
        Type type = typeof(T);
        if (_performers.ContainsKey(type)) _performers.Remove(type);
    }


    public static void SubscribeReaction<T>(Action<T> reaction, ReactionTiming timing) where T : GameAction
    {
        Dictionary<Type, List<Action<GameAction>>> subs = timing == ReactionTiming.PRE ? _preSubs : _postSubs;
        void wrappedReaction(GameAction action) => reaction((T)action);
        if (subs.ContainsKey(typeof(T)))
        {
            subs[typeof(T)].Add(wrappedReaction);
        }
        else
        {
            subs.Add(typeof(T), new());
            subs[typeof(T)].Add(wrappedReaction);
        }
    }


    public static void UnsubscribeReaction<T>(Action<T> reaction, ReactionTiming timing) where T : GameAction
    {
        Dictionary<Type, List<Action<GameAction>>> subs = timing == ReactionTiming.PRE ? _preSubs : _postSubs;
        if (subs.ContainsKey(typeof(T)))
        {
            void wrappedReaction(GameAction action) => reaction((T)action);
            subs[typeof(T)].Remove(wrappedReaction);
        }
    }
}