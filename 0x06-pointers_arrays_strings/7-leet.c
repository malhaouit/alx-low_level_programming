#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: str
 */
char *leet(char *str)
{
	char strAlphabets1[5] = {'a', 'e', 'o', 't', 'l'};
	char strAlphabets2[5] = {'A', 'E', 'O', 'T', 'L'};
	char strLeets[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;

		while (j < 5)
		{
			if (str[i] == strAlphabets1[j] || str[i] == strAlphabets2[j])
			{
				str[i] = strLeets[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
