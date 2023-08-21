#include "main.h"

/**
 * puts2 - Prints the other character of string starting with 0
 * @str: the string
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i + 1] !=  '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
