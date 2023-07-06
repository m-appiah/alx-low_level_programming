#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	whilw (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
