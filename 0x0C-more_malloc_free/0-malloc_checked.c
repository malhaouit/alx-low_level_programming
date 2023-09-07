#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The number of bytes allocated
 *
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
