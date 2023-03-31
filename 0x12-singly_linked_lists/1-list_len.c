#include <stddef.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

