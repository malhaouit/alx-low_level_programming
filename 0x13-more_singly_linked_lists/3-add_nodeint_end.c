#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add new node at the end of the list
 * @head: Pointer to pointer to the first node
 * @n: The data stored in a node
 *
 * Return: The new node if success, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
