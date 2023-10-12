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
	size_t step = sqrt(size), i;
	listint_t *block_start = list;
	listint_t *block_end = list;

	/* Find the block where 'value' is present */
	while (block_end->next != NULL && block_end->n < value)
	{
		block_start = block_end;
		for (i = 0; i < step && block_end->next != NULL; i++)
			block_end = block_end->next;

		printf("Value checked array[%ld] = [%d]\n",
				block_end->index, block_end->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			block_start->index, block_end->index);

	/* Linear search within the block */
	while (block_start != NULL && block_start->n <= value)
	{
		printf("Value checked array[%ld] = [%d]\n",
				block_start->index, block_start->n);
		if (block_start->n == value)
			return (block_start);

		block_start = block_start->next;
	}
	return (NULL);
}
