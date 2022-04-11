#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len -get string length
 * @s: string
 *
 * Description: return string length
 *
 * Return: length
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * str_cpy -copy char buffer
 * @src: source
 * @dest: destination
 *
 * Description: copy strings
 *
 * Return: pointer to destination
 */
void str_cpy(char *src, char *dest)
{
	char *cp;

	cp = dest;
	if (src == NULL)
		return;
	while (*src != '\0')
	{
		*cp = *src;
		cp++;
		src++;
	}
	*cp = '\0';
}
/**
 * new_dog -function create new dog
 * @name: new dogs name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Description: create new dog
 *
 * Return: pointer to new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lname, lowner;

	if (name == NULL)
		lname = 0;
	else
		lname = str_len(name);
	if (owner == NULL)
		lowner = 0;
	else
		lowner = str_len(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (lname + 1));
	(*dog).owner = malloc(sizeof(char) * (lowner + 1));
	if ((*dog).name == NULL || (*dog).owner == NULL)
	{
		free((*dog).name);
		free((*dog).owner);
		free(dog);
		return (NULL);
	}
	str_cpy(name, (*dog).name);
	(*dog).age = age;
	str_cpy(owner, (*dog).owner);

	return (dog);
}
