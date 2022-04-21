#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
