#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the first node
 * @n: integer to be stored in the new structure
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *previous, *tmp;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	/* set the new->next to NULL */
	/* set the new->prev to the last element or NULL */
	new->next = NULL;
	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	else
		new->prev = NULL;
	new->n = n;
	/* set the header pointer to new only if the list is empty */
	if (*head == NULL)
		*head = new;

	return (new);
}
