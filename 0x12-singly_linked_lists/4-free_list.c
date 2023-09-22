#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free all the memory allocated for the linked list.
 * @head: Pointer tro the first element.
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *new;

	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
