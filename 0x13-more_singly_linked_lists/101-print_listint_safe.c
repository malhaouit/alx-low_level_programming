#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a list even if it contain a loop
 * @head: A pointer to the first node of the list
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *exist[1024];
	const listint_t *current;
	size_t i;

	for (current = head; current != NULL; current = current->next)
	{
		for (i = 0; i < count; i++)
		{
			if (exist[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}
		exist[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
	}
	return (count);
}
