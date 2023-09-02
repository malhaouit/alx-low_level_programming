#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all arguments that the program receive
 * @argc: The size of argv array
 * @argv: The array containing all arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
