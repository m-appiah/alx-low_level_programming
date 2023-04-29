#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the begining of a list
 * @head: Double head pointer
 * @str: string input
 *
 * Return: return the address of the element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Declare a pointer to a new list_t node */
	list_t *newNode;

	/*Allocate memory for the new node*/
	newNode = malloc(sizeof(list_t));

	/* Check if memory allocation was successful*/
	if (newNode == NULL)
	{
		/* Return NULL if memory allocation fails*/
		return (NULL);
	}
	/* Copy the input string and assingn it to the newNode str*/
	newNode->str = strdup(str);
	/* check if strdup failed */
	if (newNode->str == NULL)
	{
		free(newNode); /* Free newNode if strdup failed */
		return (NULL); /* Return NULL if strup failed */
	}
	/*Calculate the length of the input string and assign it to len field*/
	newNode->len = strlen(str);
	/* Assign the current head as the next node of the newNode */
	newNode->next = *head;
	*head = newNode; /* Update the head pointer to point to the newNode */
	return (newNode); /* Return the address of the newNode */
}
