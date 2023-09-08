#include "main.h"
#include <stdlib.h>

void print(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

int isTwoDigit(int number)
{
	return (number >= 10 && number <= 99);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments passed to program
 * @argv: The array containing the arguments
 *
 * Return: 0 if success, exit function if not
 */
int main(int argc, char *argv[])
{
	char errorMessage[6] = "Error";
	int sum;

	if (argc != 3)
	{
		print(errorMessage);
		_putchar('\n');
		exit(98);
	}

	if (isTwoDigit(atoi(argv[1])) && isTwoDigit(atoi(argv[2])))
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
	}
	else
	{
		print(errorMessage);
		_putchar('\n');
		exit(98);
	}

	return (0);
}
