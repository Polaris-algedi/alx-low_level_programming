#include "search_algos.h"

/**
 * jump_list - Searches for a value in a singly linked list of integers using
 * the jump search algorithm.
 *
 * @list: Pointer to the head of the linked list.
 * @size: Number of elements in the linked list.
 * @value: The value to search for.
 *
 * Return: If the value is found, return a pointer to the node containing
 * the value; otherwise, return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *current, *previous;

	if (list == NULL)
		return (NULL);

	if (list->n == value)
		return (list);

	step = (size_t)sqrt((double)size);
	current = list;
	while (current->n < value && current->next != NULL)
	{
		previous = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;

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
