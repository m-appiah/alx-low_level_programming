#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: Returns: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *pointer = (unsigned char *)&number;

	return ((int)(*pointer));
}
