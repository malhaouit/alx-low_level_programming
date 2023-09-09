#include "main.h"
#include <stdlib.h>

void storeDigitsReverse(int sum, char *str)
{
	int i = 0;
	int start = 0;
	int end;
	char temp;

	do
		str[i++] = sum % 10 + '0';
	while (sum /= 10);

	str[i] = '\0';

	end = i - 1;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

int numberOfDigits(int n)
{
	int numDigits = 0;
	int temp = n;

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	return (numDigits);
}

void print(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

int isDigits(char *number)
{
	while (*number != '\0')
	{
		if (*number < '0' || *number > '9')
			return (0);
		number++;
	}
	return (1);
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
		exit(98);
	}

	if (isDigits(argv[1]) && isDigits(argv[2]))
	{
		int numDigits;
		char *str;

		sum = atoi(argv[1]) * atoi(argv[2]);
		if  (sum == 0)
		{
			_putchar('0');
			_putchar('\n');
		}
		else
		{
			numDigits = numberOfDigits(sum);
			str = (char *) malloc((numDigits + 1) * sizeof(char));

			if (str == NULL)
				return (1);

			storeDigitsReverse(sum, str);
			print(str);
			free(str);
		}
	}
	else
	{
		print(errorMessage);
		exit(98);
	}
	return (0);
}
