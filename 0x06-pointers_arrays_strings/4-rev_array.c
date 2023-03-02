#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: The array to be reversed
 * @n: Is the number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
