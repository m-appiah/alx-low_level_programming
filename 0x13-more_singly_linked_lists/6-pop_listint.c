#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the head node of a list
 * @head: head pointer
 *
 * Return: 0 or deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
