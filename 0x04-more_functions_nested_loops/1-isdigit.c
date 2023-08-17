#include "main.h"

/**
 * _isdigit - it checks if c is digit
 * @c: argument to be checked
 *
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
