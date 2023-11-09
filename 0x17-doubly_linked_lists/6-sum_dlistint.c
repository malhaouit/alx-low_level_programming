#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the data(n) of a doubly linked list
 * @head: A pointer to the first node of the list
 *
 * Return: The sum of all the data(n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
		return (sum);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
