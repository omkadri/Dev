using System;
using System.Text;
using System.Linq;

public static class StringUtils
{
    /// <summary>
    /// Reverses the given string.
    /// </summary>
    /// <param name="input">The string to reverse.</param>
    /// <returns>The reversed string.</returns>
    public static string Reverse(string input)
    {
        if (string.IsNullOrEmpty(input)) return input;
        return new string(input.Reverse().ToArray());
    }

    /// <summary>
    /// Checks if a string is a palindrome.
    /// </summary>
    /// <param name="input">The string to check.</param>
    /// <returns>True if the string is a palindrome, otherwise false.</returns>
    public static bool IsPalindrome(string input)
    {
        if (string.IsNullOrEmpty(input)) return false;
        string reversed = Reverse(input);
        return string.Equals(input, reversed, StringComparison.OrdinalIgnoreCase);
    }

    /// <summary>
    /// Joins an array of strings with a specified delimiter.
    /// </summary>
    /// <param name="strings">The array of strings to join.</param>
    /// <param name="delimiter">The delimiter to use.</param>
    /// <returns>The joined string.</returns>
    public static string Join(string[] strings, string delimiter)
    {
        if (strings == null || strings.Length == 0) return string.Empty;
        return string.Join(delimiter, strings);
    }

    /// <summary>
    /// Converts a string to title case.
    /// </summary>
    /// <param name="input">The string to convert.</param>
    /// <returns>The title-cased string.</returns>
    public static string ToTitleCase(string input)
    {
        if (string.IsNullOrEmpty(input)) return input;
        return System.Globalization.CultureInfo.CurrentCulture.TextInfo.ToTitleCase(input.ToLower());
    }

    /// <summary>
    /// Counts the occurrences of a specific character in a string.
    /// </summary>
    /// <param name="input">The string to search.</param>
    /// <param name="character">The character to count.</param>
    /// <returns>The number of occurrences of the character.</returns>
    public static int CountOccurrences(string input, char character)
    {
        if (string.IsNullOrEmpty(input)) return 0;
        return input.Count(c => c == character);
    }

    /// <summary>
    /// Truncates a string to a specified length and adds an ellipsis if necessary.
    /// </summary>
    /// <param name="input">The string to truncate.</param>
    /// <param name="maxLength">The maximum length of the string.</param>
    /// <returns>The truncated string.</returns>
    public static string Truncate(string input, int maxLength)
    {
        if (string.IsNullOrEmpty(input) || maxLength <= 0) return string.Empty;
        if (input.Length <= maxLength) return input;
        return input.Substring(0, maxLength) + "...";
    }

    /// <summary>
    /// Removes all whitespace from a string.
    /// </summary>
    /// <param name="input">The string to process.</param>
    /// <returns>The string without any whitespace.</returns>
    public static string RemoveWhitespace(string input)
    {
        if (string.IsNullOrEmpty(input)) return input;
        return new string(input.Where(c => !char.IsWhiteSpace(c)).ToArray());
    }

    /// <summary>
    /// Checks if a string contains only digits.
    /// </summary>
    /// <param name="input">The string to check.</param>
    /// <returns>True if the string contains only digits, otherwise false.</returns>
    public static bool IsNumeric(string input)
    {
        if (string.IsNullOrEmpty(input)) return false;
        return input.All(char.IsDigit);
    }

    /// <summary>
    /// Repeats a string a specified number of times.
    /// </summary>
    /// <param name="input">The string to repeat.</param>
    /// <param name="count">The number of times to repeat.</param>
    /// <returns>The repeated string.</returns>
    public static string Repeat(string input, int count)
    {
        if (string.IsNullOrEmpty(input) || count <= 0) return string.Empty;
        StringBuilder sb = new StringBuilder(input.Length * count);
        for (int i = 0; i < count; i++)
        {
            sb.Append(input);
        }
        return sb.ToString();
    }

    /// <summary>
    /// Capitalizes the first letter of a string.
    /// </summary>
    /// <param name="input">The string to capitalize.</param>
    /// <returns>The string with the first letter capitalized.</returns>
    public static string CapitalizeFirstLetter(string input)
    {
        if (string.IsNullOrEmpty(input)) return input;
        return char.ToUpper(input[0]) + input.Substring(1);
    }

    /// <summary>
    /// Finds the longest word in a string.
    /// </summary>
    /// <param name="input">The string to search.</param>
    /// <returns>The longest word in the string.</returns>
    public static string FindLongestWord(string input)
    {
        if (string.IsNullOrEmpty(input)) return string.Empty;
        return input.Split(new[] { ' ', '\t', '\n', '\r' }, StringSplitOptions.RemoveEmptyEntries)
                    .OrderByDescending(word => word.Length)
                    .FirstOrDefault() ?? string.Empty;
    }

    /// <summary>
    /// Checks if a string contains any uppercase letters.
    /// </summary>
    /// <param name="input">The string to check.</param>
    /// <returns>True if the string contains uppercase letters, otherwise false.</returns>
    public static bool ContainsUppercase(string input)
    {
        if (string.IsNullOrEmpty(input)) return false;
        return input.Any(char.IsUpper);
    }

    /// <summary>
    /// Checks if a string contains any lowercase letters.
    /// </summary>
    /// <param name="input">The string to check.</param>
    /// <returns>True if the string contains lowercase letters, otherwise false.</returns>
    public static bool ContainsLowercase(string input)
    {
        if (string.IsNullOrEmpty(input)) return false;
        return input.Any(char.IsLower);
    }

    /// <summary>
    /// Replaces all occurrences of a substring with another substring, ignoring case.
    /// </summary>
    /// <param name="input">The original string.</param>
    /// <param name="oldValue">The substring to replace.</param>
    /// <param name="newValue">The replacement substring.</param>
    /// <returns>The modified string.</returns>
    public static string ReplaceIgnoreCase(string input, string oldValue, string newValue)
    {
        if (string.IsNullOrEmpty(input) || string.IsNullOrEmpty(oldValue)) return input;
        return System.Text.RegularExpressions.Regex.Replace(input, System.Text.RegularExpressions.Regex.Escape(oldValue), newValue.Replace("$", "$$"), System.Text.RegularExpressions.RegexOptions.IgnoreCase);
    }

    /// <summary>
    /// Converts a string to snake_case.
    /// </summary>
    /// <param name="input">The string to convert.</param>
    /// <returns>The snake_case version of the string.</returns>
    public static string ToSnakeCase(string input)
    {
        if (string.IsNullOrEmpty(input)) return input;
        return string.Concat(input.Select((c, i) =>
            char.IsUpper(c) && i > 0 ? "_" + char.ToLower(c) : char.ToLower(c).ToString()));
    }
}
