#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory allocated
 * @d: memory pointer for dog object
 *
 * Description: free memory for dog object
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
