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

	if (n >= 10 || n <= -10)
		lastDigit = n % 10;
	else
		lastDigit = n;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar('0' + lastDigit);

	return (lastDigit);
}

