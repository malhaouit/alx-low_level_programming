#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 * Retrun: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;


	while (s[length] != '\0')
		length++;

	j = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		char temporary = s[i];

		s[i] = s[j];
		s[j] = temporary;
		j--;
	}
}
