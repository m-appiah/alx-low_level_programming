#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * my_strdup - duplicate string
 * @str: input string
 *
 * Return: NULL or pointer to the new copy
 */
char *my_strdup(char *str)
{
	size_t len;
	char *nw_str;

	len = strlen(str) + 1;
	nw_str = malloc(len);
	if (nw_str == NULL)
	{
		return (NULL);
	}
	return ((char *)memcpy(nw_str, str, len));
}

/**
 * new_dog - function that create a new dog
 * @name: name of the dog0
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL or new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || strlen(name) == 0 || strlen(owner) == 0)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = my_strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = my_strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
