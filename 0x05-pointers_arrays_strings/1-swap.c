#include "main.h"

/**
 * swap_int - swap between to integers
 * @a: the pointer to integer a
 * @b: the pointer to integer b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
