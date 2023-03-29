#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: parameter
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int i, j, k, l, length, digit;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	length = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && l == 0)
	{
		if (s[i] == ' ')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if ((j % 2) == 1)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}
