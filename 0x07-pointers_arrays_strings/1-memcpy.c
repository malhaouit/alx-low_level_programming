#include "main.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory
 * area dest
 * @dest: The destination memory address
 * @src: Te source memory address
 * @n: Number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
