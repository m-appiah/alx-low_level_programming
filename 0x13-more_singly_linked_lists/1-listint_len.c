#include "lists.h"

/**
 * listint_len - function to print the number of element in a list
 * @h: pointer
 *
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
