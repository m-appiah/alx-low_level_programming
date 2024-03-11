#include "search_algos.h"

/**
 * binary_search - Searching for value in a sorted array using binary search
 * @array: Pointer to the first element
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: first occurrence of value in array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	size_t middle;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
