#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add new node at the end of a list
 * @head: double pointer to the head node of the list
 * @n: value of the node to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare a pointer to a newNode */
	listint_t *newNode;
	/* Declare a pointer to the current node */
	listint_t *current;

	if (head == NULL)/* Check if the head pointer is NULL */
	{
		return (NULL); /* If it is, return NULL */
	}

	newNode = malloc(sizeof(listint_t));/* Allocate memory for the newNode */

	if (newNode == NULL)/* Check if the allocation was successful */
	{
		return (NULL); /* If not, return NULL */
	}

	/* Set the value of the newNode to the input value */
	newNode->n = n;

	newNode->next = NULL;/* Set the next pointer of the newNode to NULL */

	if (*head == NULL)/* Check if the list is empty */
	{
		/* If it is, set the head pointer to the newNode */
		*head = newNode;
		return (newNode);/* Return newNode*/
	}
	/* If the list is not empty, traverse it to find the last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	/* Set the next pointer of the last node to the new node */
	current->next = newNode;
	return (newNode);/* Return the address of the new node */
}
