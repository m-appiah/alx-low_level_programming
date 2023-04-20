#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numberes
 * @n: is the number of integers passed to the function
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	unsigned int numbers;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arguments, int);
		printf("%d", numbers);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);
	printf("\n");
}
