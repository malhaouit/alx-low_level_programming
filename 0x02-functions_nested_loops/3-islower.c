#include "main.h"

/**
 * _islower - function that  checks if character c is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if lowercase or 0 if something else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

