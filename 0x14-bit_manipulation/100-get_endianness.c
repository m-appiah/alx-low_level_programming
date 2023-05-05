#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 or 1;
 */
int get_endianness(void)
{
	char *x;
	int number = 1;

	x = (char *)&number;

	if (*x == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
