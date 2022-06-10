#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in the doubly lined list @h
 * @h: the head of the doubly linked list
 *
 * Return: the number of nodes in the linked list @h
 *		   0 if @h is NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);

}
