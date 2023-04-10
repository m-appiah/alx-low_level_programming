#include <stdio.h>
#include <stdlib.h>

/**
 * main -  function to print the product of two nunbers
 * @argc: number of argument recieved
 * @argv: array of strings pointer to the argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int product;
	int arg1;
	int arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);

		product = arg1 * arg2;
		printf("%d\n", product);
	}

	return (0);
}
