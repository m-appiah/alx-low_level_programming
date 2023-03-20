#include <stdio.h>

/**
 * main - program to prints all numbers of base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 48;
	int end = 57;

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	start = 97;
	end = 102;
	while (start <= end)
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
