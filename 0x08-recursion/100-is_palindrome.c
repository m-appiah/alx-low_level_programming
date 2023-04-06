#include "main.h"

/**
 * length - function to determine the string length
 * @s: string
 *
 * Return: string length
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(s + 1));
	}
}
/**
 *check_for_palindrome - check for palindrome string
 *@start: start of the string
 *@end: string length - 1
 *@s: string
 *
 *Return: 1 or 0
 */
int check_for_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] == s[end])
	{
		return (check_for_palindrome(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that returns 1 or 0 if it's palindrome or not
 * @s: input string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (check_for_palindrome(s, 0, length(s) - 1));
}
