#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: the pointer to the string
 * Return: number respecting the sign
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;
	int i = 0;

	while ((s[i] == '-') || (s[i] >= '0' && s[i] <= '9') || (s[i] == ' '))
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + (s[i] - '0');
		i++;
	}

	return (number * sign);
}
