#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive number
 * @argc: Size of array argv
 * @argv: The array containing arguments
 *
 * Return: 0 if success or 1 an add not digit number
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			int j = 0;

			while (arg[j])
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(arg);
		}
		printf("%d\n", sum);
	}
	return (0);
}
