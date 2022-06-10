#include "lists.h"
#include <stdio.h>
/**
 *add_dnodeint - Add a new node in the begining of the list
 *@head: The header of the list
 *@n: The value of the new node
 *Return: NULL if fails or the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	node->n = (int) n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	(*head)->prev = node;
	node->next = *head;
	*head = node;
	return (node);
}
