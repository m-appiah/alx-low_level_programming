#include "main.h"

/**
 * _abs -  function to compute the absolute value of an integer
 *
 * @n: is the parameter to compute absolut value
 *
 * Return: Always n (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
