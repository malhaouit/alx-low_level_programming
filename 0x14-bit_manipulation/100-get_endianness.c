#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: Nothing
 */
int get_endianness(void)
{
	int i = 0x3E8;
	char first_byte = *(char *)&i;

	if (first_byte == 0x3E)
		return (0);
	else
		return (1);
}

