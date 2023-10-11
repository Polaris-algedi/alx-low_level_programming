#include "search_algos.h"

/**
 * min - Returns the minimum of two integers.
 *
 * @x: The first integer.
 * @y: The second integer.
 *
 * Return: The smaller of the two input integers.
 */
int min(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the exponential search algorithm.
 *
 * @array: Pointer to the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, low, high, mid;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	for (i = 1; i < (int)size && array[i] <= value; i *= 2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n",
			i / 2, min(i, (int)size - 1));

	/* Binary search */
	low = i / 2;
	high = min(i, (int)size - 1);

	while (high >= low)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
