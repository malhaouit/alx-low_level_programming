#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';
	char lowerAlphabets;
	char upperAlphabets;

	while (lowerCase <= 'z')
	{
		lowerAlphabets = lowerCase;
		putchar(lowerAlphabets);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		upperAlphabets = upperCase;
		putchar(upperAlphabets);
		upperCase++;
	}
	putchar('\n');

	return (0);
}
