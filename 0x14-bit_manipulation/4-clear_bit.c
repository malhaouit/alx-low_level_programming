#include "main.h"

/**
 * clear_bit - Setss the value of a bit to 0 at a given index
 * @n: Pointer to the decimal number that we want to set 0 to
 * a bit in its binary format
 * @index: The index of the bit to be setted
 *
 * Return: 1 if the bit is setted, or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int one_zero_there;

	if (index >= 64)
		return (-1);

	one_zero_there = ~(1 << index);

	*n &= one_zero_there;

	return (1);
}
