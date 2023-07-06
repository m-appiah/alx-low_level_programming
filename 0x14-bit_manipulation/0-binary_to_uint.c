#include "main.h"
#include <string.h>

/**
 * binary_to_uint - functiom to convert a binary number to an unsigned int
 * @b: pointer to a string 0 and 1
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	unsigned int slen = strlen(b), dval = 1;

	if (b == NULL)
		return (0);

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += dval;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		dval *= 2;
	}
	return (result);
}
