#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at the given index
 * @head: first item in the doubly linked list
 * @index: the index of the element in the list to be returned
 *
 * Return: node_at_index if the node exists or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_copy = head;
	unsigned int node = 0;

	if (!head)
		return (NULL);

	while (head_copy)
	{
		if (index == node)
		{
			return (head_copy);
		}
		node++;
		head_copy = head_copy->next;
	}

	return (NULL);
}
