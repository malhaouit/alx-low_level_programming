#include "lists.h"
#include <stdlib.h>

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

/**
 * insert_nodeint_at_index - Insert new node at specific postition
 * @head: A pointer to pointer to the first node
 * @idx: The index where new node will be inserted
 * @n: The data of new node to be inserted
 *
 * Return: The new node inserted if success, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len;
	unsigned int pos = 0;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;

	len = listint_len(*head);

	if (idx >= len)
		return (NULL);

	while (pos < idx)
	{
		temp = temp->next;
		pos++;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
