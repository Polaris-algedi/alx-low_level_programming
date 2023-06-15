#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list
 * @h: points to the first noide
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_node;

	for (count_node = 0; h; count_node++)
		h = h->next;

	return (count_node);
}
