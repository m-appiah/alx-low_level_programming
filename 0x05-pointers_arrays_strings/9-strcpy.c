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

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

