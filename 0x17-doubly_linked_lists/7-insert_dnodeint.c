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
	if (!new || idx > dlistint_len(*h))
		return (NULL);

	if (*h == NULL || (*h)->next == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
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
			else if (current->next == NULL)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			current_index++;
			current = current->next;
		}
	}
	return (NULL);
}
