#include "main.h"

/**
 * clear_bit - function to set the values of a bit to 0
 * @n: pointer to the number
 * @index: bit index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
