#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatinates all the arguments
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: a pointer to the new concatinated string if success, NULL
 * if ac equal to 0 or it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int length = 0;
	int i, j;
	int ptrPosition = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *argString = av[i];

		while (*argString != '\0')
		{
			length++;
			argString++;
		}
		length++;
	}

	ptr = malloc(length + 1);
	if (ptr  == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		char *argString = av[j];

		while (*argString != '\0')
			ptr[ptrPosition++] = *argString++;
		ptr[ptrPosition++] = '\n';
	}
	ptr[length] = '\0';
	return (ptr);
}
