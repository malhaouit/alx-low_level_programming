#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: The first string
 * @s2: The second string
 * Return: difference in ascii value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	char result;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			result = 0;
			i++;
		}
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}
