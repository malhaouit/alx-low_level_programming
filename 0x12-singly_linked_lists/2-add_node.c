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
 * add_node - Add new node at the begining of linked list.
 * @head: A double pointer to the list
 * @str: A string to store to the new node of the list.
 *
 * Return: Address of new node if success, NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
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
		new->str = "(nil)";
		new->len = 0;
	}

	new->next = *head;
	*head = new;

	return (new);
}
