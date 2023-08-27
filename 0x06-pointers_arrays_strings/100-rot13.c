#include "main.h"

/**
 * rot13 - Encode string by rotating every character by 13
 * @s: The string
 *
 * Return: rotated string s
 */
char *rot13(char *s)
{
	char origineAlphabets[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encodedAlphabets[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 52)
		{
			if (s[i] == origineAlphabets[j])
			{
				s[i] = encodedAlphabets[j];
				break;
			}
			j++;
		}
		i++;
	}
}
