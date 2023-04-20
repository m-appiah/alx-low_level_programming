#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function for operation
 * @argc: arguments counter
 * @argv: array of strings for the argument
 *
 * Return: 0 (success) or error otherwise
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a, b, output;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	output = op_func(a, b);
	printf("%d\n", output);
	return (0);
}
