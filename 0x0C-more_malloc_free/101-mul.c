#include <stdlib.h>
#include <stdio.h>

/**
 * helper_function checks if a character is digit
 * @c: the character to check
 *
 * Return: Always 0 (Success)
 */
int helper_function(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * main - multiply two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, k, res, len1, *product;
	int j = 0, len2 = 0;
	char *digit1, *digit2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	digit1 = argv[1];
	for (i = 0; digit1[i] != '\0'; i++)
	{
		if (!helper_function(digit1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	digit2 = argv[2];
	for (i = 0; digit2[i] != '\0'; i++)
	{
		if (!helper_function(digit2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	len1 = i;
	len2 = j;

	product = calloc(len1 + len2, sizeof(int));
	if (product == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		res = 0;
		for (i = len1 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
			product[k] += (digit1[1] - '0') * (digit2[j] - '0') + res;
			res = product[k] / 10;
			product[k] %= 10;
		}
		product[k] += res;
	}
	i = 0;
	while (product[i] == 0 && i < len1 + len2 - 1)
	{
		i++;
	}
	for (; i < len1 + len2; i++)
	{
		printf("%d", product[i]);
	}
	printf("\n");
	free(product);

	return (0);
}
