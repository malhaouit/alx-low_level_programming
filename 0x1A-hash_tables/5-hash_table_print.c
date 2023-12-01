#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: A pointer to the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	bool is_first = true;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			is_first = false;
			current = current->next;
		}
	}
	puts("}");
}
