#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	size_t i = 0;
	char *cpy_str;

	if (str == NULL)
	{
		return (NULL);
	}

	/*for (i = 0; str[len] != '\0'; len++)*/

	cpy_str = (char *) malloc((strlen(str) + 1) * (sizeof(char)));

	if (cpy_str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		cpy_str[i] = str[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}
