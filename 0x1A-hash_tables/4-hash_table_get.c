#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Gets a value from the hash table
 * @ht: A pointer to the hash table
 * @key: The string key used to find the value
 *
 * Return: The value if found, or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

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
