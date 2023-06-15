#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the first node
 * @n: integer to be stored in the new structure
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *next;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	/* set the new structure to point to the next one */
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	/* set the next structure to point to the previous one */
	next = new->next;
	if (next)
		next->prev = new;
	/* set the header pointer */
	*head = new;

	return (new);
}
