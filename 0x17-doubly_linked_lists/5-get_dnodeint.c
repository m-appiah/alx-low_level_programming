#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 * Return: A pointer to the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	/* If we reached the end of the list and didn't find the index, return NULL*/
	return (NULL);
}
