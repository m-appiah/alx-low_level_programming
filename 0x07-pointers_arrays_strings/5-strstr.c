#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to find
 *
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if ((needle[i + 1]) == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
