#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t doubly
 * linked list
 * @head: the beginning of the doubly linked list
 *
 * Return: the sum of the data, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
