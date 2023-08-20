#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long firstFibo = 1;
	unsigned long secondFibo = 2;
	unsigned long nextFibo;
	int i;

	printf("%lu, %lu", firstFibo, secondFibo);

	for (i = 2; i < 98; i++)
	{
		nextFibo = firstFibo + secondFibo;
		printf(", %lu", nextFibo);

		firstFibo = secondFibo;
		secondFibo = nextFibo;
	}
	printf("\n");

	return (0);
}
