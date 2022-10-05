#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints the contents inside the array
 * @array: the array to print
 * @l: start point
 * @r: end point
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	i = l;
	if (i <= r)
		printf("Searching in array: ");
	while (l <= r)
	{
		printf("%u", array[l]);
		if (l != r)
			printf(", ");
		++l;
	}

	if (i <= r)
		printf("\n");
}
