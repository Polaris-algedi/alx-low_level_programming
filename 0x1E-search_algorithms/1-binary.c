#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the binary search algorithm.
 *
 * @array: Pointer to the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
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
