#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees all list
 * @head: The pointer to the first node before frees the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
