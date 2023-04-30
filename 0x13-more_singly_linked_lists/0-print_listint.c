#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print all element of a list
 * @h: pointer
 *
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	/* Declare a counter variable of type int */
	int counter;

	/* loop through the list, incrementing counter at each iteration */
	for (counter = 0; h != NULL; counter++)
	{
		/* print the value of the current node's n field */
		printf("%d\n", h->n);

		/* Move the pointer to the next node in the list */
		h = h->next;
	}
	/* Return the number of nodes in the list */
	return (counter);
}
