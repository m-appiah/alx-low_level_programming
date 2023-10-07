#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - calculates the index for a key in the hash table
 * @key: the key to be hashed
 * @size: the size of the hash table array
 *
 * Return: the index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	if (key == NULL || size == 0)
		return (0);

	hash_code = hash_djb2(key);

	return (hash_code % size);
}

