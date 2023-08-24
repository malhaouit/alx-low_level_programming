#include "main.h"

/**
 * _strncat - copy n character from src string to dest string
 * @dest: dest string
 * @src: src string
 * @n: n character
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
