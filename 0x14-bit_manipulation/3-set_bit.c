#include "main.h"

/**
 * set_bit - Set a bit at a specific index
 * @n: A pointer to the unsigned long integer
 * @index: The position where the bit to be setted
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= (1 << index);

	return (1);
}
