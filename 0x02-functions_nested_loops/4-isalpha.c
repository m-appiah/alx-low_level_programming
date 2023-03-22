#include "main.h"

/**
 * _isalpha - function to chech for alphabetic character
 *
 * @c: parameter for letter, lowercase or uppercase
 *
 * Return: one (1) or zero (0)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
