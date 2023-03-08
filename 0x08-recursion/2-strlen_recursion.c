#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: The length of the string.
 *
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}
