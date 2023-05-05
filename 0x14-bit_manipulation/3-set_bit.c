#include "main.h"

/**
 * set_bit - set the value of a bit to 1 ata given index
 * @n: pointer to the number
 * @index: bit index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
