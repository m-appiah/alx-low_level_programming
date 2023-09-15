#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer value to store in the new node.
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)/*new node becomes the head*/
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node; /* current last node's next points to the new node*/
		new_node->prev = tmp; /* new node's prev points to the old last node*/
	}
	return (new_node);
}
