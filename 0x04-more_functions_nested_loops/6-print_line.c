#include "main.h"

/**
 * print_line(int n)- a function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 * Return: Nothing.
 */
void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');

	}
	_putchar('\n');
}
