#include "main.h"

/**
 * print_last_digit - Display the last digit
 * @n: number to be treated
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n = -n;

	lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}

