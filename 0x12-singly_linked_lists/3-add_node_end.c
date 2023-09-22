#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * find_length - Calculate the length of a given string
 * @str: The given string
 *
 * Return: The length of string
 */
unsigned int find_length(const char *str)
{
	unsigned int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * add_node_end -  Add new node to the end list.
 * @head: The pointer to the first node
 * @str: String to store in new added node.
 *
 * Return: The new added node if success or NULL if failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		new->str = strdup(str);
		new->len = find_length(str);
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = ne;
	}

	return (new);
}
