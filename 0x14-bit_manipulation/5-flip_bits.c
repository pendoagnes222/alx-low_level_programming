#include "main.h"

/**
 * flip_bits - return the number of bits different between n and m.
 * @n: first unsigned integer input.
 * @m: second unsigned integer input.
 * Return: unsigned int, number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	long int flips;

	flips = 0;
	c = n ^ m;
	while (c > 0)
	{
		if (c & 1)
			flips++;
		c >>= 1;
	}
	return (flips);
}
