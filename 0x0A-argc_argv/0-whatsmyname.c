#include <stdio.h>

/**
 * main - function to print its name followed by a new line
 * @argc: number of arguments entered during compillation stage
 * @argv: array of strings
 *
 * Return: Always 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
