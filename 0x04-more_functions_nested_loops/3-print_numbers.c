#include "main.h"

/**
 * print_numbers - print numbers fro 0 to 9
 *
 * Return: return nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	
	_putchar('\n');
}
