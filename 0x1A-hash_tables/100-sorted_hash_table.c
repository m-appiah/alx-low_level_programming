#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (unsigned long int i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - inserts a key/value pair into a sorted hash table
 * @ht: the sorted hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current, *prev;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	prev = NULL;
	while (current != NULL && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key), free(new_node->value), free(new_node);
		return (0);
	}
	if (prev == NULL)
		ht->shead = new_node;
	else
		prev->snext = new_node;
	new_node->snext = current;
	if (current == NULL)
		ht->stail = new_node;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the sorted hash table
 * @key: the key to search for
 *
 * Return: the value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table in ascending order
 * @ht: the sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (printed)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		printed = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in descending order
 * @ht: the sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (printed)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		printed = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table and its contents
 * @ht: the sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
