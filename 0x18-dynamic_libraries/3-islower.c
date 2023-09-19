#include "main.h"

/**
 *_islower - function to print lowercase character
 *
 *@c: parameter to be printed
 *
 *Return: one (1) or zero (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
