#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - funtion that allocates memory for an array using malloc
 * @nmemb: input parameter
 * @size: parameter size
 *
 * Return: NULL or the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c_function;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c_function = malloc(nmemb * size);

	if (c_function == NULL)
	{
		return (NULL);
	}
	memset(c_function, 0, nmemb * size);

	return (c_function);
}
