#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals
 * @a: Array we want print its the sum of its diagonals
 * @size: The size of diagonal
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sumDiag1 = 0;
	int sumDiag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumDiag1 += a[i * size + i];
		sumDiag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumDiag1, sumDiag2);
}
