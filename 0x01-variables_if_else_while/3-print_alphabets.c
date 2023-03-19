#include <stdio.h>

/**
 *main - program to print lower and uppercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 97;
	int end = 122;

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	start = 65;
	end = 90;
	while (start <= end)
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
