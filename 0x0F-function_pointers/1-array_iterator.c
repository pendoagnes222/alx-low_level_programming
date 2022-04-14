#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr_len;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (arr_len = 0; arr_len < size; arr_len++)
		action(array[arr_len]);
}
