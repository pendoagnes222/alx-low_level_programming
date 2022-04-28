#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index.
 * @n: integer input.
 * @index: index where value will be set.
 * Return: int, 1, on success.
 *          -1, on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
