#include "lists.h"

/**
 * list_len - Calculate the number of elements of the list.
 * @h: A pointer to the first node in the list.
 *
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
