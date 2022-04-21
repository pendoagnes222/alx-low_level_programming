#include "lists.h"

/**
 * *add_node_end - adds a new node at the
 * end of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = a;

	return (a);
}
