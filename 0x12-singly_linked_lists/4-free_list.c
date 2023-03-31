#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr_holder;

	while (head)
	{
		ptr_holder = head->next;
		free(head->str);
		free(head);
		head = ptr_holder;
	}
}
