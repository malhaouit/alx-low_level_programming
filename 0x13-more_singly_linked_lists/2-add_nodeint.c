#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add new node at the begining of the list
 * @head: A double pointer to the head pointer
 * @n: The value of integer stored in the node
 *
 * Return: The new node if success, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
