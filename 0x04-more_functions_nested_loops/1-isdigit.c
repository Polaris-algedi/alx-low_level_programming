#include "main.h"
#include <stdio.h>

/**
 * _isupper(int c)- a function that checks for uppercase character
 * @c: charecter
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
