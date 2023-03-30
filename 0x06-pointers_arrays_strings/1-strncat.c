#include "main.h"

/**
 * _strncat - fumction to concatenate two string
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: n parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int src_count = 0;
        int dest_count = 0;
        int i;

        for (i = 0; src[i] != '\0'; i++)
                src_count++;
        for (i = 0; dest[i] != '\0'; i++)
                dest_count++;
        for (i = 0; i < n; i++)
                dest[dest_count + i] = src[i];
        return (dest);
}
