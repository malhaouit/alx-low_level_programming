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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
