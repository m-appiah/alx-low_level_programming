#include "search_algos.h"

/**
 * jump_search - Searches for a value using Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i, step;
	int prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev = step;
		if (prev >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		step += sqrt(size);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

	i = prev - step;
	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i == (int)size - 1 || i == prev)
			return (-1);
		i++;
	}

	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);

	return (-1);
}
