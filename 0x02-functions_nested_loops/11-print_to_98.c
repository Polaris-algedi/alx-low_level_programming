#include "main.h"
#include <stdio.h>

/**
 * print_to_98()- prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The integer to go from to 98
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n++;
			}
			else
			{
				printf("%d", n);
				n++;
				putchar('\n');
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d", n);
				n--;
				putchar('\n');
			}
		}
	}
	else
	{
		printf("%d", n);
		putchar('\n');
	}
}
