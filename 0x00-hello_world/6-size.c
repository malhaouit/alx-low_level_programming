#include<stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d bytes(s)", sizeof(char));
	printf("Size of an int: %d bytes(s)", sizeof(int));
	printf("Size of a long: %d bytes(s)", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("Size of a float: %d bytes(s)", sizeof(float));
	return (0);
}
