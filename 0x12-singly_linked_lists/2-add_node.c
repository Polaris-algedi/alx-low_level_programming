#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the first node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *first;

	first = (list_t *)malloc(sizeof(list_t));

	if (!first)
		return (NULL);

	first->str = strdup(str);
	while (*str++)
		count++;
	first->len = count;
	first->next = *head;
	*head = first;

	return (first);
}
