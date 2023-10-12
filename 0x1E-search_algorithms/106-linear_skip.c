#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: If the value is found, return a pointer to the first node where
 * value is located; otherwise, return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *previous;

	if (list == NULL)
		return (NULL);

	if (list->n == value)
		return (list);

	current = list;
	while (current->express != NULL && current->express->n < value)
	{
		previous = current;
		current = current->express;
		printf("Value checked at index [%ld] = [%d]\n",
				current->index, current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			previous->index, current->index);

	for (current = previous; current != NULL; current = current->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				current->index, current->n);
		if (current->n == value)
			return (current);
	}
	return (NULL);
}
