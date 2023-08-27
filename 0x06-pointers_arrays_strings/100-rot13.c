#include "main.h"

/**
 * rot13 - Encode string by rotating every character by 13
 * @s: The string
 *
 * Return: rotated string s
 */
char *rot13(char *s)
{
	char origine[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 52)
		{
			if (s[i] == origine[j])
			{
				s[i] = encoded[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
