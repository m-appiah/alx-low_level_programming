#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: memory area
 * @n: number of byte to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
