#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Previous pointer
 * @old_size: The size of the previous memory allocated
 * @new_size: The size of the new memory to allocate
 *
 * Return: Pointer if success or NULL if not
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size_to_copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		size_to_copy = old_size;
	else
		size_to_copy = new_size;

	for (i = 0; i < size_to_copy; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	return (new_ptr);
}
