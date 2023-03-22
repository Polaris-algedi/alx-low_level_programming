#define size_t int

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: pointer to an array of type int
 * @size: the size of the array
 * @action: pointer to the function that you intend to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
