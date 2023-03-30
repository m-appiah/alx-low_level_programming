#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
