#include "main.h"

/**
 * print_sign - check if the number is positive or negative or equale to 0.
 * @n: number to be checked
 *
 * Return: 1 if number positive, 0 if equal to 0 or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}

