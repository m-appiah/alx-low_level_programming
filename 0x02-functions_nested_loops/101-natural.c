#include <stdio.h>

/**
 * main - print the addition to all the multiples of 3 or 5
 *
 * Return:Always 0
 */
int main(void)
{
	int i;
	int add = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			add = add + i;
		}
	}
	printf("%d", add);
	printf("\n");
}
