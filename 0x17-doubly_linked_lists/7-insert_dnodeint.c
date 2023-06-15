#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the first node
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer to be stored in the new structure
 *
 * Return: The address of the new element, or NULL if it failed.
 * If it is not possible to add the new node at index idx, return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	tmp = *h;
	if (tmp)
	{
		for (i = 0; i < idx - 1; i++, tmp = tmp->next)
		{
			if (!tmp)
				return (NULL);
		}
		new->next = tmp->next;
		new->prev = tmp;
		if (tmp->next)
			tmp->next->prev = new;
		tmp->next = new;
	}
	else
	{
		new->prev = NULL;
		new->next = NULL;
	}
	new->n = n;
	/* set the header pointer to new only if the list is empty */
	if (*h == NULL)
		*h = new;

	return (new);
}
