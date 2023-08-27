#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int numberOfDigits = 0;
	int temporary = n;

	while (temporary > 0)
	{
		temporary /= 10;
		numberOfDigits++;
	}

	while (numberOfDigits > 0)
	{
		int divisor = 1;
		int i;

		for (i = 1; i < numberOfDigits; i++)
		{
			divisor *= 10;
		}
		int digit = (n / divisor) 10;

		_putchar(digit + '0');
		numberOfDigits--;
	}
}

