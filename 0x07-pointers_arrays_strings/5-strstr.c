#include "main.h"

/**
 * _strstr - find the first occurence of the substring needle
 * in the string haystack
 * @haystack: the string where occurence searched
 * @needle: the occurence to be searched
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}

		if (*q == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');
}
