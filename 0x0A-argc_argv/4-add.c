#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to prints addition of numbers
 * @argc: argument to be passed
 * @argv: strings of array to be added
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		if (atoi(argv[i]) > 0)
		{
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
