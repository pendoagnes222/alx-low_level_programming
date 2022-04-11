#include "dog.h"
#include <stdio.h>
/**
 * init_dog -initialize new dog prop
 * @d: new dog
 * @name: new dog's name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Description: initialize new dog object
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

