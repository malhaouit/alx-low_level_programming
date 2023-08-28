#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the sring s of
 * any of the bytes in the string accept
 * @s: The string to search
 * @accept: The bytes looking for
 *
 * Return: Pointer to the byte of s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}

	return ('\0');
}
