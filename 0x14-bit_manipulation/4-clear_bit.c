#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: int pointer input.
 * @index: index of binary value to be cleared.
 * Return: int, 1, on success.
 *          -1, on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
