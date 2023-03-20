#include <stdio.h>

/**
 * main - program  prints all possible combinations of single-digit numbers.
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
		if (start < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
