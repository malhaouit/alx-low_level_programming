#include "main.h"

int _square_recursion_helper(int n, int m)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	else
		return (_square_recursion_helper(n, m + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: The number to apply the natural square root
 *
 * Return: Natural square root if nhave natural square root
 * or -1 if not
 */
int _sqrt_recursion(int n)
{
		return (_square_recursion_helper(n, 1));
}
