#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of the list
 * @head: Pointer to pointer to the first node
 *
 * Return: The data of the first node we want to delete,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
