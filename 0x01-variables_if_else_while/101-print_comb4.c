#include <stdio.h>

/**
 * main - c program to  prints combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int var1;
	int var2;
	int var3;

	for (var1 = 0; var1 <= 7; var1++)
	{
		for (var2 = var1 + 1; var2 <= 8; var2++)
		{
			for (var3 = var2 + 1; var3 <= 9; var3++)
			{
				putchar(var1 + '0');
				putchar(var2 + '0');
				putchar(var3 + '0');
				if (var1 != 7 || var2 != 8 || var3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
