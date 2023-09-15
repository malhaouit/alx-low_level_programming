#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array containing the integers
 * @size: The size of the array
 * @cmp: Function pointer
 *
 * Return: The index of the number if exist, or -1 if
 * the size is negative or the number doesn't found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (size >= 0)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);

			if (x != 0)
				return (i);
		}
	}
	return (-1);
}
