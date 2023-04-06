#include "main.h"

/**
 * support_function - function to support is_prime_number
 * @number: input number
 * @i: factor
 *
 * Return: 0 or 1
 */
int support_function(int number, int i)
{
	if (i < number)
	{
		if (number % i == 0)
		{
			return (0);
		}
		else
		{
			return (support_function(number, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - function that returns 1 if the input is a prime num or 0
 * @n: input integer number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (support_function(n, 2));
	}
}
