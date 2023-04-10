#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n > 1)
		print_binary(n >> 1);

	i = n & 1;
	_putchar('0' + i);
}
