#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to be given back
 * @argc: the number of argumnt recieved to the program
 * @argv: array of strings
 *
 * Return: i for error and 0 for negative number
 */
int main(int argc, char *argv[])
{
	int i, amount, cents = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		cents += amount / coins[i];
		amount = amount % coins[i];
	}
	printf("%d\n", cents);
	return (0);
}
