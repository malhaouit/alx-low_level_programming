#include "main.h"

/**
 * _abs - give the absolute of a number
 * @n: number to give its absolute
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
