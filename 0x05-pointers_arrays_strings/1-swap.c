#include <stdio.h>
/**
 * swap_int - swap two integers
 * @a: a pointer to the integer we want to swap
 * @b: a pointer to the integer we want to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
