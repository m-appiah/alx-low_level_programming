#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string input
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = count; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
