#include <stdlib.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The pointer to the string
 * @c: The character to by found
 *
 * Return: s if c found or NULL if not
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}

	return (NULL);
}
