#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	size_t i, len = 0;
	char *cpy_str;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[len] != '\0'; len++)

	cpy_str = (char *) malloc((str[len] + 1) * sizeof(char));

	if (cpy_str == NULL)
	{
		return (NULL);
	}
	for  (i = 0; i <= len; i++)
	{
		cpy_str[i] = str[i];
	}
	return (cpy_str);
}
