#include "lists.h"
#include <stdlib.h>


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

/**
 * *insert_dnodeint_at_index - Insert a node at a specific index
 * @h: A pointer to a pointer to the first node of the list
 * @idx: The index where the new node will be added
 * @n: Int data to store in the node to be added
 *
 * Return: New node if success, or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	size_t current_index = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	current = *h;
	while (current != NULL)
	{
		if (current_index == idx)
		{
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev = new;
			new->prev->next = new;
			return (new);
		}
		else if (current->next == NULL && current_index + 1 == idx)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		current_index++;
		current = current->next;
	}
	return (NULL);
}
