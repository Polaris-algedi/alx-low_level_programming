#include "search_algos.h"

/**
 * advanced_binary_recursion - Recursively searches for a value in a sorted
 * array of integers
 * using an advanced binary search algorithm.
 *
 * @array: Pointer to the sorted array to search in.
 * @low: The low index of the search range.
 * @high: The high index of the search range.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int advanced_binary_recursion(int *array, int low, int high, int value)
{
	int i, mid, result;

	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i <= high; i++)
		printf(", %d", array[i]);
	printf("\n");

	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	if (low == high)
		return (-1);

	if (array[mid] == value)
		result = advanced_binary_recursion(array, low, mid, value);
	else if (array[mid] < value)
		result = advanced_binary_recursion(array, mid + 1, high, value);
	else
		result = advanced_binary_recursion(array, low, mid - 1, value);
	return (result);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 * an advanced binary search algorithm.
 *
 * @array: Pointer to the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursion(array, 0, (int)(size - 1), value));
}
