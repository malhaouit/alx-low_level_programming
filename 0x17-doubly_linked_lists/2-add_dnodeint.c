#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a node at the begining of a doubly linked list
 * @head: A pointer to a pointer to the first node
 * @n: An integer stored in a node
 *
 * Return: A new node added if success, or NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
