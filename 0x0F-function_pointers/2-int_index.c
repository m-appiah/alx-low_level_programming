#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers to be searched
 * @size: elements in the array
 * @cmp: function pointer
 *
 * Return: return element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
