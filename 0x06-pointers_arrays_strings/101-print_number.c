#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: a number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, c = 0, j, k;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = n;
	if (i < 10)
		_putchar(i + '0');
	else
	{
		while (i >= 10)
		{
			i /= 10;
			c++;
			if (i < 10)
				_putchar(i + '0');
		}
		i = n;
		for (j = 1; j < c + 1; j++)
		{
			k = c - j;
			while (k--)
				i /= 10;
			_putchar(i % 10 + '0');
			i = n;
		}
	}
}
