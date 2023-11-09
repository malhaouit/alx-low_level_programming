#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: A pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
