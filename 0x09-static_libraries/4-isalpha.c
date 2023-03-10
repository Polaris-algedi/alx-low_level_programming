#include "main.h"

/**
 * _isalpha()- checks for lowercase and uppercase character
 * @c: The character to check
 *
 * Return: 1 if @c is alpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
