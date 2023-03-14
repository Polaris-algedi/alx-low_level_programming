#include <stdlib.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: pointer to a string.
 *
 * Return: the length of the string.
 *
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}

/**
 *  str_concat - a function that concatenates two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer that points to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, i;

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	s = malloc(sizeof(*s) * len1 * len2 + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i <= len2; i++)
		s[len1 + i] = s2[i];
	return (s);
}
