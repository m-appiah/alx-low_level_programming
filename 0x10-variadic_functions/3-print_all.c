#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function to prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *string;

	va_start(arguments, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				string = va_arg(arguments, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
