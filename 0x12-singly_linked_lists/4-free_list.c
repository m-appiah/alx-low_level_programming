#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	/*Declare a pointer named latestNode */
	list_t *latestNode;

	/* Loop through the list untill head is NULL */
	while (head != NULL)
	{
		/* Set latestNode to head */
		latestNode = head;
		/* Set head to the next node in the list */
		head = head->next;

		/* Free the string it it is not NULL */
		if (latestNode->str != NULL)
		{
			/* Free the memory allocation for the string in latestNode */
			free(latestNode->str);
		}
		/* Free the memory allocated for latestNode itself */
		free(latestNode);
	}
}
