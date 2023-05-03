#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free a list
 * @head: pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptrNode;
	listint_t *next;

	for (ptrNode = head; ptrNode != NULL; ptrNode = next)
	{
		next = ptrNode->next;
		free(ptrNode);
	}
}
