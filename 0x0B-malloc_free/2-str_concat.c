#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatrinates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: The concatinated string if success or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length1 = 0, length2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	ptr = malloc(sizeof(char) * (length1 + length2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < length2; j++)
		ptr[i + j] = s2[j];

	ptr[length1 + length2] = '\0';

	return (ptr);
}
