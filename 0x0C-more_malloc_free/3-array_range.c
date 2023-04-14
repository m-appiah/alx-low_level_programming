#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum array
 * @max: maximum array
 *
 * Return: pointer to the allocated space or NULL otherwise
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	while (i < (max - min + 1))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
