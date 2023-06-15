#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: points to the first node
 * @index:  index of the node, starting at 0
 *
 * Return: the nth node of a dlistint_t linked list, or NULL
 * if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;


	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
