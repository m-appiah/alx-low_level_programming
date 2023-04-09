#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: parameter
 *
 * Return: 0
 */
int _atoi(char *s)
{
	unsigned int uns = 0;
	int i = 0, sign = 1;

	while (!(s[i] >= '0' && s[i] <= '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && (s[i] != '\0'))
	{
		uns = (s[i] - '0') + (uns * 10);
		i++;
	}
	uns = uns * sign;
	return (uns);
}
