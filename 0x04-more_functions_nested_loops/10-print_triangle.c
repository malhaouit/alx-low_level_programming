#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: the size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size)
	{
		int i;
		int j;
		int k;

		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
				_putchar(' ');

			for (k = 0; k < i + 1; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
