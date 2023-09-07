#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatinates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Length of the second string to concatinate
 *
 * Return: Final concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_length = 0;

	while (s1[s1_length] != '\0')
		s1_length++;

	unsigned int s2_length = 0;

	while (s2[s2_length] != '\0' && s2_length < n)
		s2_length++;

	unsigned int total_length = s1_length + s2_length;

	char *ptr = malloc(total_length + 1);

	if (ptr == NULL)
		return (NULL);

	int i;

	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];

	int j;

	for (j = 0; j < s2_length; j++)
		ptr[s1_length + j] = s2[j];

	ptr[total_length] = '\0';

	return (ptr);
}
