#include "main.h"

/**
 * _isdigit - checks for digit from 0 to 9
 * @c: input parameter
 * Return: o or 1 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
