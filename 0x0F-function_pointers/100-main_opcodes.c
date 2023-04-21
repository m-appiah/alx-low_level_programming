#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes of its own main function
 * @argc: argument counter
 * @argv: argument string vector or array
 *
 * Return: failure for 1 and 2 and success for 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	char *start = (char *) main;
	char *end = start + bytes;

	for (; start < end ; start++)
	{
		printf("%.2hhx ", *start);
	}
	printf("\n");
	return (0);
}
