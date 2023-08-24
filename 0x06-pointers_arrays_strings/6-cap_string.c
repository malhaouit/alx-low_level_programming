#include "main.h"

/**
 * cap_string - capitalize every first character of words of a string
 * @str: the string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == ','
					|| str[i - 1] == ';' || str[i - 1] == '!' || str[i - 1] == '?'
					|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
					|| str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\t'
					|| str[i - 1] == '\n') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
