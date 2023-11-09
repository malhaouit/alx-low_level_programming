#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Finds the length of a doubly linked list
 * @h: A pointer to the first node
 *
 * Return: The length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
