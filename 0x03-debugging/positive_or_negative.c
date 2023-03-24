#include "main.h"

/**
 * positive_or_negative - function to determine negative of positive numbers
 * @i: is the parameter
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is nagative\n", i);
	else
		printf("%d is positive\n", i);
}
