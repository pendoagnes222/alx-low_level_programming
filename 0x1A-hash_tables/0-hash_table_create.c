#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the table in bytes
 * Return: a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;

	if (size <= 0)
		return (NULL);
/*Reserve memory for new table*/
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

/* Assign values to new table */
	new_table->size = size;
	new_array = calloc((size_t)new_table->size, sizeof(hash_node_t *));
	if (!new_array)
		return (NULL);

	new_table->array = new_array;
	return (new_table);
}
Footer
