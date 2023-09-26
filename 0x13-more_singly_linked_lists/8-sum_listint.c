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
 * sum_listint - Calculate the sum of all data (n) of the list
 * @head: Pointer to the first node
 *
 * Return: The sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	size_t n;
	unsigned int pos = 0;
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	n = listint_len(head);

	while (pos < n)
	{
		sum += temp->n;
		temp = temp->next;
		pos++;
	}
	return (sum);
}
