#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array of integers using
 * the jump search algorithm.
 *
 * @array: Pointer to the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, step;

	if (array == NULL)
		return (-1);

	step = (int)sqrt((double)size);
	for (i = 0; i < (int)size && array[i] < value; i += step)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%d] and [%d]\n", i - step, i);

	for (j = i - step; j < (int)size && j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
