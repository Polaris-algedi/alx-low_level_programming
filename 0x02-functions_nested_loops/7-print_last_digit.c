#include "main.h"

/**
 * print_last_digit()- Print the the last digit of a number
 * @n: The number to calculate
 *
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
