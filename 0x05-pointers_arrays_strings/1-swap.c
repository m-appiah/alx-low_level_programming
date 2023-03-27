#include "main.h"

/**
 * swap_int - funtion that swaps values of two integers
 * @a: input 1
 * @b: input 2
 *
 * Result: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
