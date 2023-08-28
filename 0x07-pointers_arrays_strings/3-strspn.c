#include "main.h"

/**
 * _strspn - Get  the length of a prefix substring
 * @s: The initial string
 * @accept: The set of segment included in the first substring
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				length++;
				break;
			}
			p++;
		}

		if (*p == '\0')
			break;
		s++;
	}

	return (length);
}
