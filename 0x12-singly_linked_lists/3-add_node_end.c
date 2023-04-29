#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a nw node at ther end of a list
 * @head: double pointer to the head
 * @str: pointer to a string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Variable declearation */
	list_t *newNode;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	/* Store the string and its length in the new node */
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);

	/* Make the new node the new tail of the list */
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}

	/* Return the address of the new node */
	return (newNode);
}
