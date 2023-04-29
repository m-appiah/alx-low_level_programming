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
	list_t *new_node;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/* Store the string and its length in the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	/* Make the new node the new tail of the list */
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	/* Return the address of the new node */
	return (new_node);
}
