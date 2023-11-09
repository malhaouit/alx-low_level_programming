#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - Adds a new node to the end of a doubly linked list
 * @head: A pointer to a pointer to the last node
 * @n: An integer stored in the new node added
 *
 * Return: The new node if success, or NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		new->prev = temp;
		temp->next = new;
	}

	return (new);
}
