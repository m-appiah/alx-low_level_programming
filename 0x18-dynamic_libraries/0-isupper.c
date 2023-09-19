#include "main.h"

/**
 * _isupper - a function that checkes for uppercase character
 * @c: Parameter for checking uppercase character
 * Return: 1 if c is uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
