#include <stdio.h>

/**
 * main - function to print all arguments its receives
 * @argc: argument counter for number of args supplied
 * @argv: vector argument for array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
