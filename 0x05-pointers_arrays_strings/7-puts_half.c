#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int startIndex;

	while (str[length] != 0)
		length++;

	if (length % 2 == 0)
	{
		startIndex = length / 2;
	}
	else
	{
		startIndex = (length - 1) / 2;
		startIndex++;
	}

	for (i = startIndex; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
