#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at @index of dlistint_t linked
 * list
 * @head: the first node in the doubly linked list
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;  /* Copy head for easier usage */
	dlistint_t *head_backup = *head;  /* Backup to restore when func returns */
	unsigned int node = 0;

	if (!h || (!h->next && h->n == 0 && !h->prev))
	{
		head = NULL;
		return (-1);
	}
	while (h)
	{
		if (node == index)
		{
			if (!h->prev)
			{
				if (h->next)
				{
					h->next->prev = NULL;
					*head = h->next;
				}
				free(h);
				return (1);
			}
			if (!h->next)
			{
				if (h->prev)
					h->prev->next = NULL;
				free(h);
				return (1);
			}
			h->next->prev = h->prev;
			h->prev->next = h->next;
			free(h);
			return (1);
		}
		node++;
		h = h->next;
	}
	*head = head_backup;
	return (-1);
}
