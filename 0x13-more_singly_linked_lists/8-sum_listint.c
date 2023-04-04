#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t
 * linked list
 * @head: pointer to the listint_t list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));
	else
		return (0);
}
