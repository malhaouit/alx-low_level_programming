#include "main.h"

/**
 * prime_number_helper - Checks if the number is prime or not
 * @n: The number to check
 * @i: The divisor of n starting from i = 2 to check the result
 *
 * Return: 1 if number is prime or 0 if not
 */

int prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if the number is prime or not
 * @n: The number to check
 *
 * Return: 1 if number is prime or 0 if not
 */
int is_prime_number(int n)
{
	return (prime_number_helper(n, 2));
}
