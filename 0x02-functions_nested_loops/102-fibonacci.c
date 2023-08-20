#include <stdio.h>

/**
 * main - print the first 50  fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstFibo = 1;
	int secondFibo = 2;
	int nextFibo;
	int i;

	printf("%d, %d", firstFibo, secondFibo);

	for (i = 2; i < 50; i++)
	{
		nextFibo = firstFibo + secondFibo;

		printf(", %d", nextFibo);
		firstFibo = secondFibo;
		secondFibo = nextFibo;
	}

	printf("\n");

	return (0);
}

