#include "main.h"

/**
 * _pow_recursion - Calculate the power of a given number
 * @x: The number that we apply to it the power
 * @y: The power to a number
 *
 * Return: Result of power of x if x is positive, or -1 if negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
