#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in
 * a sorted array of integers using
 * a recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index of the subarray to search in
 * @right: right index of the subarray to search in
 * @value: value to search for
 * Return: the index where value is located
 */
int advanced_binary_recursive(
		int *array, size_t left, size_t right, int value)
{
	size_t m, i;

	if (left > right)
		return (-1);

	m = left + (right - left) / 2;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[right]);

	if (array[m] == value)
	{
		if (m == 0 || array[m - 1] != value)
			return (m);
		else
			return (advanced_binary_recursive(array, left, m, value));
	}
	else if (array[m] < value)
		return (advanced_binary_recursive(array, m + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, m - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using
 * a recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
