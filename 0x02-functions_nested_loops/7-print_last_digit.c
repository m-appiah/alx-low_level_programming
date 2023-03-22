#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 *
 * @last: parameter to print the last digit of a number
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int last)
{
	int num;

	num = last % 10;
	if (num < 0)
		num = -(num);
	_putchar(num + '0');
	return (num);
}
