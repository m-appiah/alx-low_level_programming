#include <stdio.h>

/**
 * main - program to prints all single digit numbers of base 10 starting from 0
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
	putchar('\n');
	return (0);
}
