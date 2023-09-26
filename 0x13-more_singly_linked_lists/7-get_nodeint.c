#include "lists.h"

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
 * get_nodeint_at_index - Get a node at a specific index
 * @head: A pointer to the first node if exist
 * @index: The index of specific node to be returned
 *
 * Return: The node at the specific index if founded, or NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;
	unsigned int pos = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	n = listint_len(head);

	if (index >= n)
		return (NULL);

	while (pos < index)
	{
		temp = temp->next;
		pos++;
	}
	return (temp);
}
