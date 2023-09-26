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
 * delete_nodeint_at_index - Delete a specific node
 * @head: Double pointer to the first node
 * @index: The index of node to be deleted
 *
 * Return: Return 1 if the node deleted, or -1 in not succeed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len = listint_len(*head);
	listint_t *temp, *next_node;
	unsigned int i = 0;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (len == 0)
		return (-1);

	if (index >= len)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	return (1);
}
