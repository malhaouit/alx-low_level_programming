#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes.
 * @argc: The number of arguments that must be passed, it
 * determaine how meny bytes from opcodes we need to print.
 * @argv: Array of arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char *main_ptr = (char *)main;
	int num_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
