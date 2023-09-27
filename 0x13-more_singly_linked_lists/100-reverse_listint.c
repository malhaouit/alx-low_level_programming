#include "lists.h"

/**
 * reverse_listint - Reverses a linkedlist
 * @head: A double pointer to the first node
 *
 * Return: A pointer to the first node of the
 * reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nextNode;

	prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prev;
		prev = *head;

		if (nextNode == NULL)
			break;
		*head = nextNode;
	}
	return (*head);
}
