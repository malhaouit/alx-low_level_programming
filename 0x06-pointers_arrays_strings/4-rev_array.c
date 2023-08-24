#include "main.h"

/**
 * reverse_array - represent n element in array in reversed order
 * @a: array
 * @n: n elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temporary;

	while (i < j)
	{
		temporary = a[i];
		a[i] = a[j];
		a[j] = temporary;
		i++;
		j--;
	}
}
