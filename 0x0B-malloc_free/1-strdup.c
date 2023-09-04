#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a duplicate string
 * @str: The source string to duplicate
 * Return: NULL if sr is NULL or it fails, or return
 * a pointer to the duplicate string if success
 */
char *_strdup(char *str)
{
	char *ptr;
	char *temp = str;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		length++;
		str++;
	}
	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = temp[i];
	ptr[length] = '\0';

	return (ptr);
}
