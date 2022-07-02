#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: key to get index for
 * @size: size of the array of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index;

	index = hash_value % size;
	return (index);
}
