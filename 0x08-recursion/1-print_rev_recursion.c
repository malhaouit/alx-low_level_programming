#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse order
 * using reverse recursion.
 * @s: The string to be printed in reverse order.
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
