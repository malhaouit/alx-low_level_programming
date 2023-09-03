#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minmum number of coins to make money change
 * @argc: The number of command line arguments
 * @argv: Array containing the arguments to change the money
 *
 * Return: 0 if Success or 1 if number of arguments passed to
 * program is not exactly one argument
 */
int main(int argc, char *argv[])
{
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		int coinsValues[5] = {25, 10, 5, 2, 1};
		int i;
		int coins = 0;
		int cents = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			coins = coins + cents / coinsValues[i];
			cents = cents % coinsValues[i];
		}
		printf("%d\n", coins);
	}
	return (0);
}
