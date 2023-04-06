#include "main.h"

/**
 * support_function - function to support _sqrt_recursion
 * @number: input number
 * @root: square root
 *
 * Return: 0
 */
int support_function(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
		return (support_function(number, root + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: input number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (support_function(n, 0));
}
