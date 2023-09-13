#include "function_pointers.h"

/**
 * array_iterator - Iterate the given array and prints its elements
 * @array: The array to iterate and print
 * @size: The size of the array
 * @action: The function pointer to the function that prints the
 * elements
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
