#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac:input argument counter
 * @av: double pointer to string array
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, total_len = 0, len, str_p = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_len += strlen(av[i]);
		}
	}
	total_len += ac;

	str = (char *) malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			strncpy(&str[str_p], av[i], len);
			str_p += len;
		}
		str[str_p] = '\n';
		str_p++;

	}
	str[str_p] = '\0';
	return (str);
}
