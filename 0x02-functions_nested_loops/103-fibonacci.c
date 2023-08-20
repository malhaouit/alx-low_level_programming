#include <stdio.h>

/**
 * main - print the sum of even fibonacci numbers under 4000000
 * fibonacii number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long firstFibo = 1;
	long secondFibo = 2;
	long nextFibo;
	long sum = 2;

	nextFibo = firstFibo + secondFibo;

	while (nextFibo < 4000000)
	{
		if (nextFibo % 2 == 0)
		{
			sum = sum + nextFibo;
		}

		firstFibo = secondFibo;
		secondFibo = nextFibo;

		nextFibo = firstFibo + secondFibo;
	}
	printf("%ld\n", sum);

	return (0);
}

