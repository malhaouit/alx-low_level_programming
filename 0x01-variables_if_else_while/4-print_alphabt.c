#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'a';
	char lowerAlphabets;

	while (lowerCase <= 'z')
	{
		if ((lowerCase != 'q') && (lowerCase != 'e'))
		{
			lowerAlphabets = lowerCase;
			putchar(lowerAlphabets);
		}
		lowerCase++;
	}
	putchar('\n');

	return (0);
}
