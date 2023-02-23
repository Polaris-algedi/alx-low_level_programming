#include "main.h"

/**
 * print_diagonal(int n)- a function that draws a diagonal line
 * on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i < n + 1; i++)
		{
			for (j = 0; j < i - 1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
