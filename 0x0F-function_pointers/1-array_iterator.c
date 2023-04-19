#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: array of integers
 * @size: size of an array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
