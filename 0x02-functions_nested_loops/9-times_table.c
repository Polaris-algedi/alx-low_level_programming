#include "main.h"

/**
 * times_table()- prints the 9 times table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int n, m, r, rr, rl;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = n * m;
			if (r > 9)
			{
				rl = r / 10;
				rr = r % 10;
				_putchar(rl + '0');
				_putchar(rr + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(r + '0');
				if (r + n <= 9 && m != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
