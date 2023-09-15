#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int find_length(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * print_all - Prints anything
 * @format: Specifiers characters
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int num_args = find_length(format);

	va_list args;

	va_start(args, format);

	while (i < num_args)
	{
		if (format[i] == 'c')
		{
			char x = va_arg(args, int);

			printf("%c", x);
		}
		if (format[i] == 'i')
		{
			int x = va_arg(args, int);

			printf("%d", x);
		}
		if (format[i] == 'f')
		{
			float x = va_arg(args, double);

			printf("%f", x);
		}
		if (format[i] == 's')
		{
			char *x = va_arg(args, char *);

			if (x != NULL)
				printf("%s", x);
			else
				printf("(nil)");
		}
		if (i != num_args - 1 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
}

