#include "main.h"

/**
 * jack_bauer()- prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h, m, hl, hr, ml, mr;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			hl = h / 10;
			hr = h % 10;
			ml = m / 10;
			mr = m % 10;

			_putchar(hl + '0');
			_putchar(hr + '0');
			_putchar(':');
			_putchar(ml + '0');
			_putchar(mr + '0');
			_putchar('\n');
		}
	}
}
