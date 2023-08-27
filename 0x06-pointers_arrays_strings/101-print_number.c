#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	int numberOfDigits;
	int temporary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	numberOfDigits = 0;
	temporary = n;

	while (temporary > 0)
	{
		temporary /= 10;
		numberOfDigits++;
	}

	while (numberOfDigits > 0)
	{
		int divisor = 1;
		int i;
		int digit;

		for (i = 1; i < numberOfDigits; i++)
		{
			divisor *= 10;
		}
		digit = (n / divisor) % 10;

		_putchar(digit + '0');
		numberOfDigits--;
	}
}

