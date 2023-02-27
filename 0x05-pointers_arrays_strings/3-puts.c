#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer to a string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
