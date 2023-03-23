#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int w, x, y, z;

	x = 1;
	y = 2;
	z = 3;
	for (w = 0; w < 50; w++)
	{
		if (w != 49)
			printf("%ld\n", x);
		else
			printf("%ld\n", x);
		z = y + z;
		y = x + y;
		x = z - y;
	}
	return (0);
}
