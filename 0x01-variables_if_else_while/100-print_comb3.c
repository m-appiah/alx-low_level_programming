#include <stdio.h>

/**
 * main - program to prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 0;
	int end = 8;
	int start_1 = 1;
	int end_1 = 9;
	int temp = 1;

	while (start <= end)
	{
		start_1 = temp;
		while (start_1 <= end_1)
		{
			putchar(start + '0');
			putchar(start_1 + '0');
			start_1++;
			if (start != end)
			{
				putchar(',');
				putchar(' ');
			}
		}
		temp++;
		start++;
	}
	putchar('\n');
	return (0);
}
