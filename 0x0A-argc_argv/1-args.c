#include <stdio.h>

/**
 * main - function to prints the number of argument passed
 * @argc: number of argument(s) passed
 * @argv: vector array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
		return (0);
}
