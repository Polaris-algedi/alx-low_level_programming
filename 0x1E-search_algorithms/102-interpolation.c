#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the interpolation search algorithm.
 *
 * @array: Pointer to the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first
 * occurrence in the array; otherwise, return -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (size - 1), pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
