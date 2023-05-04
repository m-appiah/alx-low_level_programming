#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head pointer
 * @index: position of the node to be retrieved
 *
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (temp == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
