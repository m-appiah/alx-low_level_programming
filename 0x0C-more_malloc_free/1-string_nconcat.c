#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: first number of bytes of s2
 *
 * Return: NULL or concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	concat_str = malloc((len1 + n + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	memcpy(concat_str, s1, len1);
	memcpy(concat_str + len1, s2, n + '\0');
	return (concat_str);
}
