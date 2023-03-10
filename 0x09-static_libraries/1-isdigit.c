#include "main.h"
#include <stdio.h>

/**
 * _isdigit(int c)- a function that checks for uppercase character
 * @c: integer
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
