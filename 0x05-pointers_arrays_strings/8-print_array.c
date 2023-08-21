#include "main.h"
#include <stdio.h>

/**
 * print_array - print n character from the array
 * @a: variable name that pointred to
 * @n: number of chachters to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
