#include <stdio.h>

/**
 * main - Entry point (print Fizz, Buzz or FizzBuzz)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz ");
			if (i % 5 == 0)
				printf("Buzz ");
			if ((i % 3 != 0) && (i % 5 != 0))
				printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
