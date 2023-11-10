#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index
 * @head: A pointer to a pointer to the first node of the list
 * @index: The index where the node must be deleted
 *
 * Return: 1 if success, or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t current_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(current);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}
	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
