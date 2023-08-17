#include "main.h"

/**
 * _isupper - this function check if character is uppercase
 * @c: character to be checked
 * Return: 1 if character is uppercase or 0 if is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
