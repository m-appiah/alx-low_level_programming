#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: strings to be printed between strings
 * @n: number of strings to be printed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *string;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(arguments, char *);
		printf("%s", string);

		if (string == NULL)
			printf("nil");

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);
	printf("\n");
}
