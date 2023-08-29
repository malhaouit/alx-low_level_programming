#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: An array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
	}
	_putchar('\n');
}
