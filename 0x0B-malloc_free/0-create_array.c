#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of specific char
 * @size: The size of the array
 * @c: The specific char
 * Return: NULL if size equal to 0, a pointer to the array
 * if success or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (size == 0)
		return (NULL);
	else if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
