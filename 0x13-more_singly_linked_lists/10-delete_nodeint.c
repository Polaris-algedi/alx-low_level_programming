#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: double pointer to the listint_t list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *element_n_1, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

		return (1);
	}

	element_n_1 = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!element_n_1)
			return (-1);
		element_n_1 = element_n_1->next;
	}


	temp = element_n_1->next;
	element_n_1->next = temp->next;
	free(temp);

	return (1);
}
