#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current)
	{
		if (current <= current->next)
		{
			temp = current->next;
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			free(current);
			break;
		}

		temp = current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		free(current);
		current = temp;
		count++;
	}

	*h = NULL;

	return (count);
}
