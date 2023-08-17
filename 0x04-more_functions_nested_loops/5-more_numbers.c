#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 11; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
