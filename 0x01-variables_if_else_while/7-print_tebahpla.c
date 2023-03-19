#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 122;
	int end = 97;

	while (start >= end)
	{
		putchar(start);
		start--;
	}
	putchar('\n');
	return (0);
}

