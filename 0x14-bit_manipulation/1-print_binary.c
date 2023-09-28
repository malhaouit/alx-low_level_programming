#include "main.h"

/**
 * print_binary - Converts and print number in binary format
 * @n: The number to be converted and printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int lastDigit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	lastDigit = n & 1;
	_putchar('0' + lastDigit);
	print_binary(n >> 1);
}
