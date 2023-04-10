#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to prints addition of numbers
 * @argc: argument to be passed
 * @argv: strings of array to be added
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 49 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
