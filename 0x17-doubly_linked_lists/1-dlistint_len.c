#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
