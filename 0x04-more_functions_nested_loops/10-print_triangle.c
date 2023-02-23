#include "main.h"

/**
 * print_triangle(int size)- a function that prints a triangle,
 * followed by a new line.
 * @size: is the size of the triangle.
 * If size is 0 or less, the function should print only a new line
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, k, nsp;

	nsp = size - 1;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < nsp; j++)
				_putchar(' ');
			nsp--;
			for (k = 0; k < i + 1; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
