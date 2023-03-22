#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
