#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add new node at the bigining of a list
 * @head: double pointeer
 * @n: node
 *
 * Return: NULL or new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	/* Set the value of the newNode to the input value */
	newNode->n = n;
	/* Set the next pointer of the newNode to the current head of the list*/
	newNode->next = *head;
	/* Set the head pointer to the newNode*/
	*head = newNode;

	return (newNode);
}
