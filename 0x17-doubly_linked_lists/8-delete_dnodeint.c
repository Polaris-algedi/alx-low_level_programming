#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list
 * @head: double pointer to the first node
 * @index: the index of the node to be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (!head)
		return (-1);

	current = *head;
	if (index == 0 && *head)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++, current = current->next)
	{
		if (!current)
			return (-1);
	}
	if (current)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
