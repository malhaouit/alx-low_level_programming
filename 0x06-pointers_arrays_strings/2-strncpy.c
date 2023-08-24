#include "main.h"

/**
 * _strncpy - copy n character from src to dest string
 * @dest: destination string
 * @src: source string
 * @n: number of character to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
