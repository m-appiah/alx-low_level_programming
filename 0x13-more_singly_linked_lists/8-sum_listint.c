#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data(n) of a list
 * @head: head pointer
 *
 * Return: sum or NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
