#include "main.h"

/**
 * _strlen_recursion - Calculate the recursion length of string
 * @s: The string to calculate its length
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s++));
}
