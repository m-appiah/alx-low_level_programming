#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory using malloc and free
 * @old_size: old allocated  memory size
 * @new_size: newly allocated size of the memory
 * @ptr: pointer to the allocated memory
 *
 * Return: NULL or newly allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;
	unsigned int i = 0;
	char *c_ptr, *c_new;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		{
			return (NULL);
		}
		return (new_pointer);
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
	{
		return (NULL);
	}
	c_new = new_pointer;
	c_ptr = ptr;

	while (i < old_size && i < new_size)
	{
		c_new[i] = c_ptr[i];

		i++;
	}
	free(ptr);
	return (new_pointer);
}
