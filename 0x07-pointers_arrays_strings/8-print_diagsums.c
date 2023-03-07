#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: Array.
 * @size: The size of the array.
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, count1 = 0, count2 = 0;

	for (i = 0; i < size; i++)
	{
		count1 += a[i * size + i];
		count2 += a[i * size + (size - 1) - i];
	}
	printf("%d, %d\n", count1, count2);
}
