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

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
