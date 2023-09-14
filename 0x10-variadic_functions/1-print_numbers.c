#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints the numbers separated by the string separator.
 * @separator: The string separator to be printed between numbers.
 * @n: Number of optional arguments (Numbers passed)
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	if (separator == NULL)
		return;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (n != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
