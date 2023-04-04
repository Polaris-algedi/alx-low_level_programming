#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to the listint_t list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}


	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
