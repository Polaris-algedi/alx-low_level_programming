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
 *  _strdup - a function that returns a pointer to a newly
 *  allocated space in memory
 *
 * @str: string to copy
 *
 * Return: pointer to the first character of the array
 */

char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen_recursion(str);
	s = malloc(sizeof(*s) * len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];
	return (s);
}
