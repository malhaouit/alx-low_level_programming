#include <stdio.h>

/**
 * main - print the first 50  fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long firstFibo = 1;
	long secondFibo = 2;
	long nextFibo;
	int i;

	printf("%ld, %ld", firstFibo, secondFibo);

	for (i = 2; i < 50; i++)
	{
		nextFibo = firstFibo + secondFibo;

		printf(", %ld", nextFibo);
		firstFibo = secondFibo;
		secondFibo = nextFibo;
	}

	printf("\n");

	return (0);
}

