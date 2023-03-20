#include <stdio.h>

/**
 * main -  program to prints all possible combinations of two two-digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int var1;
	int var2;
	int var3;
	int var4;

	for (var1 = '0'; var1 <= '9'; var1++)
	{
		for (var2 = '0'; var2 <= '9'; var2++)
		{
			for (var3 = var1; var3 <= '9'; var3++)
			{
				for (var4 = var2 + 1; var4 <= '9'; var4++)
				{
					putchar(var1);
					putchar(var2);
					putchar(' ');
					putchar(var3);
					putchar(var4);

					if (!((var1 == '9' && var2 == '8') && (var3 == '9' && var4 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				var4 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
