#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: points to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_holder;

	while (head)
	{
		ptr_holder = head->next;
		free(head);
		head = ptr_holder;
	}
}
