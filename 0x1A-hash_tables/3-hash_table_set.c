#include "hash_tables.h"

/**
 * helper_hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int helper_hash_djb2(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


/**
 * helper_key_index - gives the index of the key
 * @key: key to get index for
 * @size: size of the array of the hash table
 * Return: index of the key
 */
unsigned long int helper_key_index(const char *key, unsigned long int size)
{
	unsigned long int hash_value = helper_hash_djb2(key);
	unsigned long int index;

	index = hash_value % size;
	return (index);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value pair
 * Return: an integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (!ht)
		return (0);
	index = helper_key_index(key, ht->size);
	if (!ht->array)
		return (0);
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	new_node->next = temp;
	ht->array[index] = new_node;
	return (1);
}
