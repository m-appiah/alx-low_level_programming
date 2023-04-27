#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function to print the number of element in a list
 * @h: pointer
 *
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
