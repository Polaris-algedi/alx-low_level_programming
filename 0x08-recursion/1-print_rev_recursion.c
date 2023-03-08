#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 *
 * @s: Pointer to a string.
 *
 * Return: Void
 *
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(++s);
	_putchar(*(--s));
}
