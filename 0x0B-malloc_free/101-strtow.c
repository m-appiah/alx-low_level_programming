#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: string to count the words
 *
 * Return: The number of words in @str.
 */
int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ' && str[i] != '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split into words.
 *
 * Return: NULL or pointer
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len = 0, wc = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = count_words(str);
	words = malloc((wc + 1) * sizeof(char *));
		if (words == NULL)
			return (NULL);

	for (i = 0; str[i] && k < wc; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
				{
				       	len = 0;
					for (j = i; str[j] && str[j] != ' ' && str[j] != '\t'; j++)
						len++;

					words[k] = malloc((len + 1) * sizeof(char));
					if (words[k] == NULL)
					{
						for (i = 0; i < k; i++)
							free(words[i]);
						free(words);
						return (NULL);
					}

					for (j = 0; j < len; j++, i++)
						words[k][j] = str[i];
					words[k++][j] = '\0';
				}
	}
	words[k] = (NULL);
	return (words);
}
