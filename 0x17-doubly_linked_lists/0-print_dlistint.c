#include "lists.h"

/**
 * print_dlistint - prints the contents of the doubly linked list @h
 * @h: the first item in the doubly linked list
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{

	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
