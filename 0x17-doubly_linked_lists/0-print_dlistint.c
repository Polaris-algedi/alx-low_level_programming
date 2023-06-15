#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: points to the first noide
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node;

	for (count_node = 0; h; count_node++, h = h->next)
		printf("%d\n", h->n);

	return (count_node);
}
