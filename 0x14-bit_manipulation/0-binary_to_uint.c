#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: binary string.
 * Return: unsigned int, converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int total;

	if (b == NULL)
		return (0);

	total = 0;
	while (*b)
	{
		total <<= 1;
		if (*b == '1')
			total += 1;
		else if (*b == '0')
		{
			b++;
			continue;
		}
		else
			return (0);
		b++;
	}
	return (total);

}
