#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the begining of a list
 * @head: head pointer
 * @str: string
 *
 * Return: return the address of the element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *duplicateStr;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	duplicateStr = strdup(str);
	if (duplicateStr == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = duplicateStr;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
