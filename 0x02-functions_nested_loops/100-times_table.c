#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @x: Is n times table
 *
 * Return: Nothing
 */
void print_times_table(int x)
{
	int n, m, r;

	if (x > 15 || x < 0)
		return;
	for (n = 0; n <= x; n++)
	{
		for (m = 0; m <= x; m++)
		{
			r = n * m;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r < 10)
			{
				if (m == 0)
					_putchar(r + '0');
				else
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				}
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else
			{
				_putchar(r / 100 + '0');
				_putchar((r / 10) % 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
