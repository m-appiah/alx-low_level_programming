#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: the first occurrence of value in array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
