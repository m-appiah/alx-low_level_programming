#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		concat_str[len1 + i] = s2[i];
	}
	return (concat_str);
}
