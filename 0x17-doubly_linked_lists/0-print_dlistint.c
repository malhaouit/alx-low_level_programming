#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: A pointer to the first node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	if (!h)
		return (n);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}
	return (n);
}
