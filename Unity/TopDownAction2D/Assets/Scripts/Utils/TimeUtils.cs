using System;
using UnityEngine;

public static class TimeUtils
{
    /// <summary>
    /// Converts seconds into a formatted time string (HH:MM:SS).
    /// </summary>
    /// <param name="totalSeconds">The total number of seconds.</param>
    /// <returns>A formatted time string.</returns>
    public static string SecondsToFormattedTime(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        return string.Format("{0:D2}:{1:D2}:{2:D2}", hours, minutes, seconds);
    }

    /// <summary>
    /// Converts a TimeSpan into a formatted time string (HH:MM:SS).
    /// </summary>
    /// <param name="timeSpan">The TimeSpan object.</param>
    /// <returns>A formatted time string.</returns>
    public static string TimeSpanToFormattedTime(TimeSpan timeSpan)
    {
        return string.Format("{0:D2}:{1:D2}:{2:D2}",
                             timeSpan.Hours,
                             timeSpan.Minutes,
                             timeSpan.Seconds);
    }

    /// <summary>
    /// Returns the current Unix timestamp in seconds.
    /// </summary>
    /// <returns>The current Unix timestamp.</returns>
    public static long GetCurrentUnixTimestamp()
    {
        return DateTimeOffset.UtcNow.ToUnixTimeSeconds();
    }

    /// <summary>
    /// Converts a Unix timestamp to a DateTime object.
    /// </summary>
    /// <param name="unixTimestamp">The Unix timestamp in seconds.</param>
    /// <returns>A DateTime object representing the timestamp.</returns>
    public static DateTime UnixTimestampToDateTime(long unixTimestamp)
    {
        return DateTimeOffset.FromUnixTimeSeconds(unixTimestamp).UtcDateTime;
    }

    /// <summary>
    /// Calculates the time difference between two Unix timestamps and returns it as a TimeSpan.
    /// </summary>
    /// <param name="startTimestamp">The start Unix timestamp.</param>
    /// <param name="endTimestamp">The end Unix timestamp.</param>
    /// <returns>A TimeSpan representing the difference.</returns>
    public static TimeSpan CalculateTimeDifference(long startTimestamp, long endTimestamp)
    {
        return TimeSpan.FromSeconds(endTimestamp - startTimestamp);
    }

    /// <summary>
    /// Delays execution of a coroutine for a specified number of seconds.
    /// </summary>
    /// <param name="monoBehaviour">The MonoBehaviour instance to start the coroutine.</param>
    /// <param name="delaySeconds">The number of seconds to delay.</param>
    /// <param name="action">The action to perform after the delay.</param>
    public static void DelayAction(MonoBehaviour monoBehaviour, float delaySeconds, Action action)
    {
        monoBehaviour.StartCoroutine(DelayCoroutine(delaySeconds, action));
    }

    private static System.Collections.IEnumerator DelayCoroutine(float delaySeconds, Action action)
    {
        yield return new WaitForSeconds(delaySeconds);
        action?.Invoke();
    }

    /// <summary>
    /// Converts seconds into a human-readable format like "2 hours, 5 minutes".
    /// </summary>
    /// <param name="totalSeconds">The total number of seconds.</param>
    /// <returns>A human-readable time string.</returns>
    public static string SecondsToHumanReadable(int totalSeconds)
    {
        TimeSpan timeSpan = TimeSpan.FromSeconds(totalSeconds);

        string result = "";
        if (timeSpan.Hours > 0)
            result += $"{timeSpan.Hours} hour{(timeSpan.Hours > 1 ? "s" : "")}, ";
        if (timeSpan.Minutes > 0)
            result += $"{timeSpan.Minutes} minute{(timeSpan.Minutes > 1 ? "s" : "")}, ";
        result += $"{timeSpan.Seconds} second{(timeSpan.Seconds > 1 ? "s" : "")}";

        return result.TrimEnd(',', ' ');
    }

    /// <summary>
    /// Gets the current date and time in the local timezone.
    /// </summary>
    /// <returns>The current local DateTime.</returns>
    public static DateTime GetCurrentLocalDateTime()
    {
        return DateTime.Now;
    }

    /// <summary>
    /// Checks if a Unix timestamp is in the future.
    /// </summary>
    /// <param name="unixTimestamp">The Unix timestamp in seconds.</param>
    /// <returns>True if the timestamp is in the future, otherwise false.</returns>
    public static bool IsFutureTimestamp(long unixTimestamp)
    {
        return unixTimestamp > GetCurrentUnixTimestamp();
    }

    /// <summary>
    /// Calculates the number of days between two DateTime objects.
    /// </summary>
    /// <param name="startDate">The start date.</param>
    /// <param name="endDate">The end date.</param>
    /// <returns>The number of days between the dates.</returns>
    public static int CalculateDaysBetween(DateTime startDate, DateTime endDate)
    {
        return (endDate.Date - startDate.Date).Days;
    }

    /// <summary>
    /// Converts seconds into a formatted time string with milliseconds (HH:MM:SS:fff).
    /// </summary>
    /// <param name="totalSeconds">The total number of seconds.</param>
    /// <returns>A formatted time string with milliseconds.</returns>
    public static string SecondsToFormattedTimeWithMilliseconds(float totalSeconds)
    {
        TimeSpan timeSpan = TimeSpan.FromSeconds(totalSeconds);
        return string.Format("{0:D2}:{1:D2}:{2:D2}:{3:D3}",
                             timeSpan.Hours,
                             timeSpan.Minutes,
                             timeSpan.Seconds,
                             timeSpan.Milliseconds);
    }

    /// <summary>
    /// Calculates the elapsed time since a specific date.
    /// </summary>
    /// <param name="startDate">The start date.</param>
    /// <returns>A TimeSpan representing the elapsed time.</returns>
    public static TimeSpan GetElapsedTimeSince(DateTime startDate)
    {
        return DateTime.UtcNow - startDate.ToUniversalTime();
    }

    /// <summary>
    /// Clamps a TimeSpan to a specified range.
    /// </summary>
    /// <param name="timeSpan">The TimeSpan to clamp.</param>
    /// <param name="min">The minimum TimeSpan.</param>
    /// <param name="max">The maximum TimeSpan.</param>
    /// <returns>The clamped TimeSpan.</returns>
    public static TimeSpan ClampTimeSpan(TimeSpan timeSpan, TimeSpan min, TimeSpan max)
    {
        if (timeSpan < min) return min;
        if (timeSpan > max) return max;
        return timeSpan;
    }
}
