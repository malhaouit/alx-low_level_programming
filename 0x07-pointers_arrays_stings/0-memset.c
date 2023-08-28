#include "main.h"

/**
 * _memset - set constant byte b to fill first n bytes
 * in memory
 * @b: The constant to fill
 * @n: Number of bytes to be filled
 *
 * Return: the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *origine = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (origine);
}
