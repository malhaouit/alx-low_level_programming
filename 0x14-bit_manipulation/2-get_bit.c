#include "main.h"

/**
 * get_bit - Get a bit at specific index
 * @n: The number where get the bit in its binary format
 * @index: The position of the bit
 *
 * Return: The bit at the index if success or -1 if not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
