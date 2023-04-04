#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a:parameter a
 * @size: size of the buffer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
