#include "lists.h"

/**
 * get_dnodeint_at_index - Get nth node of a doubly linked list
 * @head: A pointer to the first node of the list
 * @index: The index of a node starting from 0
 *
 * Return: The nth node if exist or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_index = 0;

	current = head;

	while (current != NULL)
	{
		if (current_index == index)
			return (current);

		current_index++;
		current = current->next;
	}

	return (NULL);
}
