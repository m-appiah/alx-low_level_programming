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
	listint_t *ptrNode;
	listint_t *next;

	for (ptrNode = *head; ptrNode != NULL; ptrNode = next)
	{
		next = ptrNode->next;
		free(ptrNode);
	}
	*head = NULL;
}
