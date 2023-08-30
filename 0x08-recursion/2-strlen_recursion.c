#include "main.h"

/**
 * _strlen_recursion - Calculate the recursion length of string
 * @s: The string to calculate its length
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length = 1 + _strlen_recursion(s + 1);
		
	return (length);
}
