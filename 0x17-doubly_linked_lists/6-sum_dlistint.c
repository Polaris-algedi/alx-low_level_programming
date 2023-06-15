#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Add all the numbers of dlistint_t list
 * @head: points to the first noide
 *
 * Return: The sum of all data in dlistint_t, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
