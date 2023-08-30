#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: The number to calculate its factorial
 *
 * Return: factorial of n if is positive or -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
