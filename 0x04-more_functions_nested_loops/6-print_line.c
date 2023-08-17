#include "main.h"

/**
 * print_line - Draws a straight line using '_'
 * @n: number of character '_'
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
