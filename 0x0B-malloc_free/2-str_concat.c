#include "main.h"
#include <stdlib.h>

/**
 * str_concat - allocate space in memory for concateneted string
 * @s1: input first string
 * @s2: input second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, len1, len2;
	char *concat_str;

	i = len1 = len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		i++;
		concat_str[i] = s1[i];
	}
	while (i < len2)
	{
		i++;
		concat_str[len1 + 1] = s2[i];
	}
	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
