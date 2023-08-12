#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char uppercase = 'A';
	char lowercase;

	while (uppercase <= 'Z')
	{
		lowercase = uppercase + ('a' - 'A');
		putchar(lowercase);

		uppercase++;
	}
	putchar('\n');

	return (0);
}
