#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_node_create - Creates a hash node (node of a linked list)
 * in the hash table
 * @key: The string key to generate the hash value
 * @value: The value to be stored in the in the hash node
 *
 * Return: A hash node
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *new_hn;

	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
		return (NULL);

	new_hn->key = strdup(key);
	if (new_hn->key == NULL)
	{
		free(new_hn);
		return (NULL);
	}

	new_hn->value = strdup(value);
	if (new_hn->value == NULL)
	{
		free(new_hn->key);
		free(new_hn);
		return (NULL);
	}

	new_hn->next = NULL;

	return (new_hn);
}

/**
 * hash_table_set - Initializes and sets the hash table
 * @ht: A pointer to the hash table
 * @key: The string key to generate the hash value
 * @value: The value in the hash node to be stored int the hash table
 *
 * Return: 1 if success, or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_hn, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_hn = hash_node_create(key, value);
	if (new_hn == NULL)
		return (0);

	new_hn->next = ht->array[index];
	ht->array[index] = new_hn;

	return (1);
}
