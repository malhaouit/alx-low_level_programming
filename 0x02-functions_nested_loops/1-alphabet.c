#include "main.h"

/**
 * main - Print alphabets 
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
