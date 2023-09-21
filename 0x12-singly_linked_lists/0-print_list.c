#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list.
 * @h: The pointer to the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[%d] (nil)\n", 0);
			h = h->next;
			counter++;
		}
		else
		{
			printf("[%d] %s\n", (h->len), (h->str));
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
