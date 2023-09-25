#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees all list
 * @head: The pointer to the first node before frees the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL || *head != NULL)
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free(temp);
			temp = *head;
		}
		*head = NULL;
		free(temp);
	}
	else
		return;
}
