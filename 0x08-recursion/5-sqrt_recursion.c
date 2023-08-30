#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: The number to apply the natural square root
 *
 * Return: Natural square root if nhave natural square root
 * or -1 if not
 */
int _sqrt_recursion(int n)
{
	int m = n / 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (m * m == n)
		return (m);
	else
		return (_sqrt_recursion(m - 1));
}
