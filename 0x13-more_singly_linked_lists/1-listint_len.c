#include "lists.h"

/**
 * listint_len - Calculate the length of the list
 * @h: The pointer to the first  node of the list
 *
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	int list_len = 0;

	while (h != 0)
	{
		h = h->next;
		list_len++;
	}
	return (list_len);
}
