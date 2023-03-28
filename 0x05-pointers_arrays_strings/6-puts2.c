#include "main.h"

/**
 * puts2 - funtion to prints every other character of a string
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
