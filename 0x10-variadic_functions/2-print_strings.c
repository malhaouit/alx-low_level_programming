#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings arguments separated by the given
 * separator string
 * @separator: The string printed between every string arguments
 * @n: Number of arguments passed
 * @...: The optionl arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
