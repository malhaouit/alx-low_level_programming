#include "hash_tables.h"

/**
 * key_index - Gives the index using djb2 algorithm
 * @key: The string we want to get its index in the hash table
 * @size: The size of the hash table
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
