#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input integer.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	if (n != 0)
	{
		print_binary(n >> 1);
		n & 1 ? _putchar('1') : _putchar('0');
	}
}
