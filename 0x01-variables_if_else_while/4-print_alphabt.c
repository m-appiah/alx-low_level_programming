#include <stdio.h>

/**
 * main - program to prints all lowercase alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 97;
	int end = 122;

	while (start <= end)
	{
		if (start != 'q' && start != 'e')
			putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
