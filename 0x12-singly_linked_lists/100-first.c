#include <stdio.h>

void first(void)__attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * Return: no return.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
