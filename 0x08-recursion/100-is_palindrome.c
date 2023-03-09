#include "main.h"

/**
 * is_palindrome_three_arg - checks if a string is a palindrome
 *
 * @s: string to check
 * @start: Index of element to start from
 * @end: Index of element to end at
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome_three_arg(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end - 1])
		return (0);
	return (is_palindrome_three_arg(s, start + 1, end - 1));
}

/**
 * string_length - calculate the length of a string
 *
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int string_length(char *s)
{
	if (!*s)
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: string to check
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_three_arg(s, 0, string_length(s)));
}
