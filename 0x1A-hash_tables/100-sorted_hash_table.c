#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* shash_table_create - Creates a hash table
* @size: The size of the hash table
*
* Return: Hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
* shash_table_set - Insert a key-value pair in the sorted list
* @ht: A pointer to the hash table
* @key: The string key
* @value: The value correspond to the key
*
* Return: 1 if insertion succeed, or 0 if not
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_hn, *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	new_hn = malloc(sizeof(shash_node_t));
	if (new_hn == NULL)
		return (0);

	new_hn->key = strdup(key);
	new_hn->value = strdup(value);

	new_hn->next = ht->array[index];
	ht->array[index] = new_hn;

	if (ht->shead == NULL)
	{
		ht->shead = new_hn;
		ht->stail = new_hn;
		new_hn->sprev = NULL;
		new_hn->snext = NULL;
	}
	else
	{
		tmp = ht->shead;
		while (tmp && strcmp(new_hn->key, tmp->key) > 0)
			tmp = tmp->snext;
		if (tmp == NULL)
		{
			new_hn->sprev = ht->stail;
			new_hn->snext = NULL;
			ht->stail->snext = new_hn;
			ht->stail = new_hn;
		}
		else
		{
			new_hn->snext = tmp;
			new_hn->sprev = tmp->sprev;
			if (tmp->sprev)
				tmp->sprev->snext = new_hn;
			else
				ht->shead = new_hn;
			tmp->sprev = new_hn;
		}
	}

	return (1);
}


/**
* shash_table_get - Gets a value
* @ht: A pointer to the hash table
* @key: The string key
*
* Return: The value founded if succeed, or NULL if not
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hn;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	for (hn = ht->array[index]; hn != NULL; hn = hn->next)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
	}

	return (NULL);
}

/**
* shash_table_print - Prints a hash table
* @ht: A pointer to the hash table
*
* Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hn;

	printf("{");
	for (hn = ht->shead; hn != NULL; hn = hn->snext)
	{
		printf("'%s': '%s'", hn->key, hn->value);
		if (hn->snext)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints the hash tables key/value pairs in reverse order
* @ht: A pointer to the hash table
*
* Return: Nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hn;

	printf("{");
	for (hn = ht->stail; hn != NULL; hn = hn->sprev)
	{
		printf("'%s': '%s'", hn->key, hn->value);
		if (hn->sprev)
			printf(", ");
	}
	printf("}\n");
}


/**
* shash_table_delete - Deletes a hash table
* @ht: A pointer to the hash table
*
* Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *hn, *next_hn;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		for (hn = ht->array[i]; hn != NULL; hn = next_hn)
		{
			next_hn = hn->next;
			free(hn->key);
			free(hn->value);
			free(hn);
		}
	}

	free(ht->array);
	free(ht);
}

