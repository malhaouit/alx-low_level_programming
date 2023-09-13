#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: A function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
