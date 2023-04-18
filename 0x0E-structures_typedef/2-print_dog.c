#include "dog.h"
#include <stdio.h>

/**
 * print_dog - pring struct dog
 * @d: pointer to struct dog
 *
 * Return: nill or struct dog
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
	{
		return;
	}

	name = d->name == NULL ? "(nil)" : d->name;
	age = d->age;
	owner = d->owner == NULL ? "(nil)" : d->owner;

	printf("Name: %s\n", name);
	printf("Age: %0.6f\n", age);
	printf("Owner: %s\n", owner);
}
