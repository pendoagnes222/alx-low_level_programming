#include "lists.h"

/**
 * free_dlistint - frees the mem occupied by the doubly linked list @head
 * @head: the first item in the doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		free(head);
		return;
	}
	while (head->next)
	{
		free(head->prev);
		head = head->next;
	}
	free(head->prev);
	free(head);
}
