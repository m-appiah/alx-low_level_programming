#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
