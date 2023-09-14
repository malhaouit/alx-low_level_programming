#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of optional arguments
 * @n: The number of optional arguments
 *
 * Return: The sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, num, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}
