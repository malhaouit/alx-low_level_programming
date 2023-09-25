#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the list
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodesof the list
 */
size_t print_listint(const listint_t *h)
{
	int list_len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_len++;
	}
	return (list_len);
}
