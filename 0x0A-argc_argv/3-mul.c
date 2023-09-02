#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: The size of argv array
 * @argv: The array containing all arguments
 *
 * Return: 0 if success or 1 if the program not receive
 * two arguments
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
