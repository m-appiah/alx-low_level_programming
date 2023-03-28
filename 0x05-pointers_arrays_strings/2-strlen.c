#include "main.h"

/**
 * _strlen - function to return the length of a string
 * @s: input string
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
	counter++;
	}
	return (counter);
}
