#include "main.h"

/**
 * _puts - function that prints a strint, followed by a new line
 * @str: input string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
