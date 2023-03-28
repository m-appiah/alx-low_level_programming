#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 *
 * @str: input string character
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\n'; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
