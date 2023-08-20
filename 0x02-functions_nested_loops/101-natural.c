#include <stdio.h>

/**
 * main - print the of all multiples of 3 and 5 below 1024
 *
 * Returun: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("The of all multiples of 3 and 5 below 1024 is: %d\n", sum);

	return (0);
}
