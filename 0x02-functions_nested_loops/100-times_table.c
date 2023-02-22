#include "main.h"

/**
 * print_times_table(int x)- prints the n times table, starting with 0
 * @x: Is n times table
 *
 * Return: Nothing
 */
void print_times_table(int x)
{
	int n, m, r, rr, rl, rm;
	if (x <= 15 && x >= 0)
	{
		for (n = 0; n <= x; n++)
		{
			for (m = 0; m <= x; m++)
			{
				r = n * m;
				if (r > 99)
				{
					rl = r / 100;
					rm = (r / 10) % 10;
					rr = r % 10;
					_putchar(rl + '0');
					_putchar(rm + '0');
					_putchar(rr + '0');
					if (m != x)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (r > 9)
				{
					rl = r / 10;
					rr = r % 10;
					_putchar(rl + '0');
					_putchar(rr + '0');
					if (r + n <= 99 && m != x)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else if (m != x)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(r + '0');
					if (r + n <= 9 && m != x)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (m != x)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
