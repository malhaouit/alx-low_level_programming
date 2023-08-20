#include "main.h"

/**
 * print_times_table - print times table between 0 and 15
 * @n: number of times table
 * Return: nothing
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j == 0)
					_putchar(k + '0');
				else
				{
					if (k >= 0 && k < 100)
					{
						_putchar(' ');
						_putchar(' ');
						if (k > 9)
							_putchar(k / 10 + '0');
						else
							_putchar(' ');
						_putchar(k % 10 + '0');
					}
					if (k >= 100)
					{
						_putchar(' ');
						_putchar(k / 100 + '0');
						_putchar((k / 10) % 10 + '0');
						_putchar(k % 10 + '0');
					}
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
