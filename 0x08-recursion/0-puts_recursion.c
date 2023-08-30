#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Pointer to a string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');

