#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head->next;
		free(head);
		head = temp;

		free_listint(head);
	}
}
