#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: a pointer to a string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
