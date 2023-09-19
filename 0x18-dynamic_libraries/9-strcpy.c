#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
