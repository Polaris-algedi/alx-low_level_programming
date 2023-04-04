#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	if (*head)
		free_listint2(head);
}
