#include "main.h"

/**
 * flip_bits - return the number of flips
 * @n: the first number to be fliped
 * @m: the second number to be fliped
 *
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int b = n ^ m;

	while (b)
	{
		counter += b & 1;
		b >>= 1;
	}
	return (counter);
}
